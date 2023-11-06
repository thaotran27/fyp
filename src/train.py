# train.py
from joblib import dump
from pathlib import Path

import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from xgboost import XGBClassifier
import sys
from sklearn.metrics import accuracy_score

def load_data(data_path):
    dataset_train = pd.read_csv(data_path)
    X = dataset_train[["Thumb","Index","Middle","Ring","Pinky","ax","ay","az","gx","gy","gz"]].to_numpy()
    y = dataset_train["label"].to_numpy()
    return X, y

def get_model(X_train, y_train, model_name):
    print("start training")
    print(pd.DataFrame(X_train))
    if(model_name == "RandomForest"):
        clf = RandomForestClassifier(max_depth=2, random_state=0)
        clf.fit(X_train, y_train)
    if(model_name == "XGBoost"):
        classmap = {0: 'A', 1: 'B', 2: 'C', 3: 'D', 4: 'O', 5: 'S'}
        reverse_classmap = {v: k for k, v in classmap.items()}
        y_train_encoded = np.array([reverse_classmap[value] for value in y_train])
        clf = XGBClassifier(n_estimators=100, max_depth=5, learning_rate=0.1)
        clf.fit(X_train, y_train_encoded)
    return clf

def main(repo_path):
    train_csv_path = repo_path / "data/prepared/train.csv"
    X_train, y_train = load_data(train_csv_path)
    model_name = sys.argv[1]
    classifier = get_model(X_train, y_train, model_name)
    print(repo_path)
    if(model_name == "RandomForest"):
        dump(classifier, repo_path / "model/modelRF.joblib")
    if(model_name == "XGBoost"):
        dump(classifier, repo_path / "model/modelXGB.joblib")
    '''
    train_csv_path = repo_path / "data/prepared/train.csv"
    train_data, labels = load_data(train_csv_path)
    sgd = SGDClassifier(max_iter=10)
    trained_model = sgd.fit(train_data, labels)
    dump(trained_model, repo_path / "model/model.joblib")
    '''

if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)