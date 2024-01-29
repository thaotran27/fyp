from joblib import load
import json
from pathlib import Path
import numpy as np
from sklearn.metrics import accuracy_score, f1_score, precision_score, recall_score
from train import load_data
import seaborn as sns
from sklearn import metrics


classmap = {0:'C', 1:'D', 2:'O', 3:'S', 4:'T', 5:'Z'}    
window_size = 3
step = 1
thrshold = 0.6

'''
Rule of thumb: A commonly used rule of thumb for choosing the window size is to use 10% to 25% 
of the length of the time series. For example, if the time series has 100 data points, a window 
size of 10 to 25 data points might be appropriate.
'''

def main(repo_path):

    # test data is a series of pre-defined alphabet sequence, in 1 .csv file.
    test_csv_path = repo_path / "......"
    test_data, labels = load_data(test_csv_path)

    # load models for motion gestures
    model_RF_m = load(repo_path / "......")
    model_XGB_m = load(repo_path / "......")

    # predict with moving window
    predictions_RF = []
    for i in range(len(test_data) - window_size):

        current_data = test_data[i:(i + window_size)]
        current_label = labels[i:(i + window_size)]

        # predict for current window
        pred_proba_RF = model_RF_m.predict_proba(current_data)
        if max(pred_proba_RF) >= thrshold:
            prediction_RF = classmap(np.argmax(pred_proba_RF))
        else:
            prediction_RF = 'None'
        predictions_RF.append(prediction_RF)

        # how to calculate error?
        error = len([j for j in current_label if j != prediction_RF])
        # move to next window
        i = i + step

    print(f'{"test data:": <16}', labels)
    print(f'{"predicted data:": <16}', predictions_RF)
    print(f'{"cumulated error:": <16}', error)

if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)