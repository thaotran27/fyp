# train.py
from joblib import dump
from pathlib import Path

import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.neural_network import MLPClassifier
from xgboost import XGBClassifier
from sklearn.svm import SVC
import sys
from micromlgen import port
import emlearn
from sklearn.model_selection import GridSearchCV


# some models e.g.XGBoost need integer index as label

classmap = {0:'a', 1:'b', 2:'c', 3:'d', 4:'e', 
            5:'f', 6:'g', 7:'h', 8:'i', 9:'j',
            10:'k', 11:'l', 12:'m', 13:'n', 14:'o', 
            15:'p', 16:'q', 17:'r', 18:'s', 19:'t', 
            20:'u', 21:'v', 22:'w', 23:'x', 24:'y', 25:'z', 26:'0'}

#classmap = {0:'C', 1:'D', 2:'O', 3:'S', 4:'T', 5:'Z'}
reverse_classmap = {v: k for k, v in classmap.items()}

def load_data(data_path):
    dataset_train = pd.read_csv(data_path)
    X = dataset_train[["Thumb","Index","Middle","Ring","Pinky","Pitch","Roll"]].to_numpy()
    y = dataset_train["label"].to_numpy()
    return X, y

def get_model(X_train, y_train, model_name):
    print("start training, model name:", model_name)

    if(model_name == "RandomForest"):
        clf = RandomForestClassifier(n_estimators=100, max_depth=5, criterion='gini', random_state=0)
        clf.fit(X_train, y_train)

    if(model_name == "XGBoost"):
        y_train_encoded = np.array([reverse_classmap[value] for value in y_train])
        clf = XGBClassifier(n_estimators=100, max_depth=5, learning_rate=0.1)
        clf.fit(X_train, y_train_encoded)

    if(model_name == "SVC"):
        clf = SVC(gamma=0.001)
        clf.fit(X_train, y_train)

    if(model_name == "MLP"):
        parameters = {'solver': ['adam'], 
                    'max_iter': [1000], 
                    'hidden_layer_sizes': [(50, 100)], 
                    'activation': ['relu', 'logistic']}
        clf = GridSearchCV(MLPClassifier(), parameters, n_jobs=-1)
        clf.fit(X_train, y_train)
        optimal_param = clf.best_params_
        print(optimal_param)
        '''
        optimal_clf = MLPClassifier(solver=optimal_param['solver'], 
                                    max_iter=optimal_param['max_iter'],
                                    hidden_layer_sizes=optimal_param['hidden_layer_sizes'],
                                    activation=optimal_param['activation']).fit(X_train, y_train)
        '''
        optimal_clf = MLPClassifier().fit(X_train, y_train)
    return optimal_clf

def main(repo_path):
    train_csv_path = repo_path / "data/prepared/train.csv"
    X_train, y_train = load_data(train_csv_path)
    model_name = sys.argv[1]
    classifier = get_model(X_train, y_train, model_name)
    print(repo_path)

    #c_code_path = repo_path / "cheader"
    c_code_path = repo_path / "Hardware" / "Prediction"
    # c_code = port(classifier, classmap=classmap, tmp_file = c_code_path / 'xgboost.json')
    cmodel = emlearn.convert(classifier, method='inline')
    cmodel.save(file=c_code_path / 'MLP.h', name='MLP')


    if(model_name == "RandomForest"):
        # store model in pipeline
        dump(classifier, repo_path / "model/modelRF.joblib")
        # output header file for model
        f = open(c_code_path / "RandomForest.h", "w")
        f.write(c_code)
        f.close()

    if(model_name == "XGBoost"):
        # store model in pipeline
        dump(classifier, repo_path / "model/modelXGB.joblib")
        # output header file for model
        f = open( c_code_path / "XGBoost.h", "w")
        f.write(c_code)
        f.close()

    if(model_name == "SVC"):
        # store model in pipeline
        dump(classifier, repo_path / "model/modelSVC.joblib")
        # output header file for model
        f = open( c_code_path / "SVC.h", "w")
        f.write(c_code)
        f.close()
    
    if(model_name == "MLP"):
        # store model in pipeline
        dump(classifier, repo_path / "model/modelMLP.joblib")


if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)