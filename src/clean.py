# this is to use for Cleaning data script
# Assumption: the rows with data will not have any NULL values
# TODO: Add way to deal with NULL values (now it will just drop the data)
# TODO: current implemenation have to reprocess the old data again, this is too make sure it is cleaned
import pandas as pd
import sys
from pathlib import Path

columns_names = names=["label","Thumb","Index","Middle","Ring","Pinky","ax","ay","az","gx","gy","gz"]

def concat_files(source_path, new_file, label):

    df_new = pd.read_csv(new_file, names=columns_names)
    df_new = df_new.dropna(axis=0)
    df_new = df_new.iloc[:, 1:].apply(pd.to_numeric, errors='coerce').dropna()
    df_new['label'] = label
    #df_new = df_new.reset_index(drop=True)

    out_file_path = source_path / "{}.csv".format(label)
    df_old = pd.DataFrame()
    if out_file_path.is_file():
        df_old = pd.read_csv(out_file_path, names=columns_names)
        df_old = df_old.iloc[:, 1:].apply(pd.to_numeric, errors='coerce').dropna()
        df_old = df_old.dropna(axis=0)
        df_old['label'] = label
        #df_old = df_old.reset_index(drop=True)
    return pd.concat([df_old, df_new]).reset_index(drop=True)

'''
    for csv_path in source_path.rglob(label + ".csv"):
        df_new = pd.read_csv(new_file, names=columns_names)
        df_new = df_new.dropna(axis=0)
        df_new = df_new.iloc[:, 1:].apply(pd.to_numeric, errors='coerce').dropna()
        df_new['label'] = label
        #df_new = df_new.reset_index(drop=True)

        df_old = pd.read_csv(csv_path, names=columns_names)
        df_old = df_old.iloc[:, 1:].apply(pd.to_numeric, errors='coerce').dropna()
        df_old = df_old.dropna(axis=0)
        df_old['label'] = label
        #df_old = df_old.reset_index(drop=True)
'''
    
def save_as_csv(filenames, destination):
    filenames.to_csv(destination)

def main(repo_path):
    if len(sys.argv) != 3:
        print("Usage: python add_numbers.py <num1> <num2>")
        sys.exit(1)
    data_path = repo_path / "data"
    source_path = data_path / "raw"
    new_file = sys.argv[1]
    label = sys.argv[2]
    df_concatenated = concat_files(source_path, new_file, label)
    print('Done concatenating')
    save_as_csv(df_concatenated, source_path / "{}.csv".format(label))
    print('Done saving csv. Now do "dvc add data/raw/your-label.csv" and "dvc push" and "git add new-dvc-file"')

if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)

