# this is to use for Cleaning data script
# Assumption: the rows with data will not have any NULL values
# TODO: Add way to deal with NULL values (now it will just drop the data)
# TODO: current implemenation have to reprocess the old data again, this is too make sure it is cleaned
import pandas as pd
import sys
from pathlib import Path
from io import StringIO

columns_names = ["Thumb","Index","Middle","Ring","Pinky","Pitch","Roll"]
number_columns = len(columns_names)

def concat_files(source_path, new_file, label):
    data_new = []
    with open(new_file, 'r') as file:
        for line in file:
            # Split each line by comma
            row = line.strip().split(',')
            row_edited = []
            for element in row:
                if len(element) > 0:
                    #print(element)
                    row_edited.append(element)
            if(len(row_edited) == number_columns):
                data_new.append(row_edited)
                #print(row_edited)
    df_new = pd.DataFrame(data_new, columns=columns_names)
    df_new = df_new.apply(pd.to_numeric, errors='coerce').dropna()
    #df_new = df_new.rename(columns={i: columns_names[i] for i in range(number_columns)})
    df_new['label'] = label
    print("new df")
    print(df_new)
    out_file_path = source_path / "{}.csv".format(label)
    df_old = pd.DataFrame()
    if out_file_path.is_file():
        df_old = pd.read_csv(out_file_path)
        print(df_old)
        df_old = df_old[["Thumb","Index","Middle","Ring","Pinky","Pitch","Roll"]]
        df_old = df_old.dropna(axis=0)
        print(df_old)
        df_old['label'] = label
    return pd.concat([df_old if not df_old.empty else None,df_new])

def save_as_csv(filenames, destination):
    filenames.to_csv(destination)

def main(repo_path):
    if len(sys.argv) != 3:
        print("Usage: python clean.py <csv file> <label>")
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

