# evaluate.py
from joblib import load
import json
from pathlib import Path
import numpy as np
from sklearn.metrics import accuracy_score, f1_score, precision_score, recall_score
from train import load_data
import seaborn as sns
from sklearn import metrics


    

def main(repo_path):
    test_csv_path = repo_path / "data/prepared/test.csv"
    test_data, labels = load_data(test_csv_path)
    model_RF = load(repo_path / "model/modelRF.joblib")
    model_XGB = load(repo_path / "model/modelXGB.joblib")

    predictions_RF = model_RF.predict(test_data)
    metrics_RF = {'Accuracy': accuracy_score(labels, predictions_RF), 
                  'f1-score': f1_score(labels, predictions_RF, average='weighted'), 
                  'Precision': precision_score(labels, predictions_RF, average='weighted'),
                  'Recall': recall_score(labels, predictions_RF, average='weighted')}
    metrics_path_RF = repo_path / "metrics/metrics_RF.json"
    metrics_path_RF.write_text(json.dumps(metrics_RF))
    

    predictions_XGB = model_XGB.predict(test_data)
    classmap = {0: 'A', 1: 'B', 2: 'C', 3: 'D', 4: 'O', 5: 'S'}
    predictions_XGB_decoded = np.array([classmap[value] for value in predictions_XGB])
    metrics_XGB = {'Accuracy': accuracy_score(labels, predictions_XGB_decoded), 
                  'f1-score': f1_score(labels, predictions_XGB_decoded, average='weighted'), 
                  'Precision': precision_score(labels, predictions_XGB_decoded, average='weighted'),
                  'Recall': recall_score(labels, predictions_XGB_decoded, average='weighted')}
    metrics_path_XGB = repo_path / "metrics/metrics_XGB.json"
    metrics_path_XGB.write_text(json.dumps(metrics_XGB))
    

    disp1 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_RF)
    disp1.figure_.savefig('confusion_matrix/confusion_matrix_RF.png')
    disp2 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_XGB_decoded)
    disp2.figure_.savefig('confusion_matrix/confusion_matrix_XGB.png')

if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)