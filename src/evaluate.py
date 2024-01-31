# evaluate.py
from joblib import load
import json
from pathlib import Path
import numpy as np
from sklearn.metrics import accuracy_score, f1_score, precision_score, recall_score
from train import load_data
import seaborn as sns
from sklearn import metrics

classmap = {0:'A', 1:'B', 2:'C', 3:'D', 4:'E', 
            5:'F', 6:'G', 7:'H', 8:'I', 9:'J',
            10:'K', 11:'L', 12:'M', 13:'N', 14:'O', 
            15:'P', 16:'Q', 17:'R', 18:'S', 19:'T', 
            20:'U', 21:'V', 22:'W', 23:'X', 24:'Y', 25:'Z'}

#classmap = {0:'C', 1:'D', 2:'O', 3:'S', 4:'T', 5:'Z'}    

def main(repo_path):
    test_csv_path = repo_path / "data/prepared/test.csv"
    test_data, labels = load_data(test_csv_path)

    # load models
    model_RF = load(repo_path / "model/modelRF.joblib")
    model_XGB = load(repo_path / "model/modelXGB.joblib")

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
    

    # display heatmap
    disp1 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_RF)
    disp1.figure_.savefig('confusion_matrix/confusion_matrix_RF.png')
    disp2 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_XGB_decoded)
    disp2.figure_.savefig('confusion_matrix/confusion_matrix_XGB.png')

if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)