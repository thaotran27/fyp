# evaluate.py
from joblib import load
import json
from pathlib import Path
import numpy as np
from sklearn.metrics import accuracy_score, f1_score, precision_score, recall_score
from train import load_data
import seaborn as sns
from sklearn import metrics

classmap = {0:'a', 1:'b', 2:'c', 3:'d', 4:'e', 
            5:'f', 6:'g', 7:'h', 8:'i', 9:'j',
            10:'k', 11:'l', 12:'m', 13:'n', 14:'o', 
            15:'p', 16:'q', 17:'r', 18:'s', 19:'t', 
            20:'u', 21:'v', 22:'w', 23:'x', 24:'y', 25:'z'}
#classmap = {0:'C', 1:'D', 2:'O', 3:'S', 4:'T', 5:'Z'}    

def main(repo_path):
    test_csv_path = repo_path / "data/prepared/test.csv"
    test_data, labels = load_data(test_csv_path)

    # load models
    model_RF = load(repo_path / "model/modelRF.joblib")
    model_XGB = load(repo_path / "model/modelXGB.joblib")
    model_SVC = load(repo_path / "model/modelSVC.joblib")

    # prediction and evaluation of RF
    predictions_RF = model_RF.predict(test_data)
    metrics_RF = {'Accuracy': accuracy_score(labels, predictions_RF), 
                  'f1-score': f1_score(labels, predictions_RF, average='weighted'), 
                  'Precision': precision_score(labels, predictions_RF, average='weighted'),
                  'Recall': recall_score(labels, predictions_RF, average='weighted')}
    metrics_path_RF = repo_path / "metrics/metrics_RF.json"
    metrics_path_RF.write_text(json.dumps(metrics_RF))
    
    # prediction and evaluation of XGBoost
    predictions_XGB = model_XGB.predict(test_data)
    predictions_XGB_decoded = np.array([classmap[value] for value in predictions_XGB])
    metrics_XGB = {'Accuracy': accuracy_score(labels, predictions_XGB_decoded), 
                  'f1-score': f1_score(labels, predictions_XGB_decoded, average='weighted'), 
                  'Precision': precision_score(labels, predictions_XGB_decoded, average='weighted'),
                  'Recall': recall_score(labels, predictions_XGB_decoded, average='weighted')}
    metrics_path_XGB = repo_path / "metrics/metrics_XGB.json"
    metrics_path_XGB.write_text(json.dumps(metrics_XGB))

    # prediction and evaluation of SVC
    predictions_SVC = model_SVC.predict(test_data)
    metrics_SVC = {'Accuracy': accuracy_score(labels, predictions_SVC), 
                  'f1-score': f1_score(labels, predictions_SVC, average='weighted'), 
                  'Precision': precision_score(labels, predictions_SVC, average='weighted'),
                  'Recall': recall_score(labels, predictions_SVC, average='weighted')}
    metrics_path_SVC = repo_path / "metrics/metrics_SVC.json"
    metrics_path_SVC.write_text(json.dumps(metrics_SVC))
    

    # display heatmap
    disp1 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_RF)
    disp1.figure_.savefig('confusion_matrix/confusion_matrix_RF.png')
    disp2 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_XGB_decoded)
    disp2.figure_.savefig('confusion_matrix/confusion_matrix_XGB.png')
    disp3 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_SVC)
    disp3.figure_.savefig('confusion_matrix/confusion_matrix_SVC.png')

if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)