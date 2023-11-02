# prepare.py
from pathlib import Path

import pandas as pd
from sklearn.model_selection import train_test_split

def get_files_and_labels(source_path):
    dataframes = []
    columns = None

    for csv_path in source_path.rglob("*.csv"):
        filename = csv_path.absolute()
        folder = csv_path.parent.name
        df = pd.read_csv(csv_path)
        columns = df.columns.tolist()
        df = df[1:]
        dataframes.append(df)
    return pd.concat(dataframes)

def save_as_csv(filenames, destination):
    pd.DataFrame(filenames).to_csv(destination)

def main(repo_path):
    data_path = repo_path / "data"
    train_path = data_path / "raw"
    dataset = get_files_and_labels(train_path)
    train_data, test_data = train_test_split(dataset, test_size=0.33, random_state=10)
    prepared = data_path / "prepared"
    save_as_csv(train_data, prepared / "train.csv")
    save_as_csv(test_data, prepared / "test.csv")

if __name__ == "__main__":
    repo_path = Path(__file__).parent.parent
    main(repo_path)