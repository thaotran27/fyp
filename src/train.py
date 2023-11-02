# train.py
from joblib import dump
from pathlib import Path

import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier

from sklearn.metrics import accuracy_score


def get_model(X_train, y_train):
    print("start training")
    clf = RandomForestClassifier(max_depth=2, random_state=0)
    clf.fit(X_train, y_train)
    return clf

def main(repo_path):
    train_csv_path = repo_path / "data/prepared/train.csv"
    dataset_train = pd.read_csv(train_csv_path)
    X_train = dataset_train[["Thumb","Index","Middle","Ring","Pinky","ax","ay","az","gx","gy","gz"]].to_numpy()
    y_train = dataset_train["label"].to_numpy()
    
    classifier = get_model(X_train, y_train)
    print(repo_path)
    dump(classifier, repo_path / "model/model.joblib")
    
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