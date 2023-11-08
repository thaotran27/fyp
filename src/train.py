# train.py
from joblib import dump
from pathlib import Path

import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from xgboost import XGBClassifier
import sys
from micromlgen import port

def load_data(data_path):
    dataset_train = pd.read_csv(data_path)
    X = dataset_train[["Thumb","Index","Middle","Ring","Pinky","ax","ay","az","gx","gy","gz"]].to_numpy()
    y = dataset_train["label"].to_numpy()
    return X, y

def get_model(X_train, y_train, model_name):
    print("start training")
    print(pd.DataFrame(X_train))
    if(model_name == "RandomForest"):
        clf = RandomForestClassifier(n_estimators=100, max_depth=2, criterion='gini', random_state=0)
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


    classmap = {0: 'A', 1: 'B', 2: 'C', 3: 'D', 4: 'O', 5: 'S'}
    c_code = port(classifier, classmap=classmap)

    if(model_name == "RandomForest"):
        dump(classifier, repo_path / "model/modelRF.joblib")
        f = open("/Users/haihongyu/Desktop/fyp/Hardware/real_time_sensor_plot/RandomForest.h", "w")
        f.write(c_code)
        f.close()
    if(model_name == "XGBoost"):
        dump(classifier, repo_path / "model/modelXGB.joblib")
        f = open("/Users/haihongyu/Desktop/fyp/Hardware/real_time_sensor_plot/XGBoost.h", "w")
        f.write(c_code)
        f.close()

if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)