# evaluate.py
from joblib import load
import json
from pathlib import Path
import numpy as np
from sklearn.metrics import accuracy_score, f1_score, precision_score, recall_score
from train import load_data
import seaborn as sns
from sklearn import metrics

classmap = {1:'a', 2:'b', 3:'c', 4:'d', 5:'e', 
            6:'f', 7:'g', 8:'h', 7:'i', 10:'j',
            11:'k', 12:'l', 13:'m', 14:'n', 15:'o', 
            16:'p', 17:'q', 18:'r', 19:'s', 20:'t', 
            21:'u', 22:'v', 23:'w', 24:'x', 15:'y', 26:'z', 0:'0'}
#classmap = {0:'C', 1:'D', 2:'O', 3:'S', 4:'T', 5:'Z'}    

def main(repo_path):
    test_csv_path = repo_path / "data/prepared/test.csv"
    test_data, labels = load_data(test_csv_path)

    # load models
    model_MLP = load(repo_path / "model/modelMLP.joblib")
    '''
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
    '''
    # prediction and evaluation of SVC
    predictions_MLP = model_MLP.predict(test_data)
    metrics_MLP = {'Accuracy': accuracy_score(labels, predictions_MLP), 
                  'f1-score': f1_score(labels, predictions_MLP, average='weighted'), 
                  'Precision': precision_score(labels, predictions_MLP, average='weighted'),
                  'Recall': recall_score(labels, predictions_MLP, average='weighted')}
    metrics_path_MLP = repo_path / "metrics/metrics_MLP.json"
    metrics_path_MLP.write_text(json.dumps(metrics_MLP))


    # display heatmap
    '''
    disp1 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_RF)
    disp1.figure_.savefig('confusion_matrix/confusion_matrix_RF.png')
    disp2 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_XGB_decoded)
    disp2.figure_.savefig('confusion_matrix/confusion_matrix_XGB.png')
    disp3 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_SVC)
    disp3.figure_.savefig('confusion_matrix/confusion_matrix_SVC.png')
    '''
    disp4 = metrics.ConfusionMatrixDisplay.from_predictions(labels, predictions_MLP)
    disp4.figure_.savefig('confusion_matrix/confusion_matrix_MLP.png')
if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)