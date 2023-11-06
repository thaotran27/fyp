# evaluate.py
from joblib import load
import json
from pathlib import Path
import numpy as np
from sklearn.metrics import accuracy_score
from train import load_data
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn import metrics


    

def main(repo_path):
    test_csv_path = repo_path / "data/prepared/test.csv"
    test_data, labels = load_data(test_csv_path)
    model_RF = load(repo_path / "model/modelRF.joblib")
    model_XGB = load(repo_path / "model/modelXGB.joblib")

    predictions_RF = model_RF.predict(test_data)
    accuracy_RF = accuracy_score(labels, predictions_RF)
    metrics_RF = {"accuracy": accuracy_RF}
    accuracy_path_RF = repo_path / "metrics/accuracy_RF.json"
    accuracy_path_RF.write_text(json.dumps(metrics_RF))
    disp1 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_RF)

    predictions_XGB = model_XGB.predict(test_data)
    classmap = {0: 'A', 1: 'B', 2: 'C', 3: 'D', 4: 'O', 5: 'S'}
    predictions_XGB_decoded = np.array([classmap[value] for value in predictions_XGB])
    accuracy_XGB = accuracy_score(labels, predictions_XGB_decoded)
    metrics_XGB = {"accuracy": accuracy_XGB}
    accuracy_path_XGB = repo_path / "metrics/accuracy_XGB.json"
    accuracy_path_XGB.write_text(json.dumps(metrics_XGB))
    disp2 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_XGB_decoded)

    f, axes = plt.subplots(1, 2, figsize=(20, 5), sharey='row')
    disp1.plot(ax=axes[0], xticks_rotation=45)
    disp1.ax_.set_title("RandomForest")
    disp1.plot(ax=axes[1], xticks_rotation=45)
    disp1.ax_.set_title("XGBoost")
    plt.show()

if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)