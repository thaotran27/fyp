import pandas as pd

filename = "d1.csv"

df = pd.read_csv(filename)
df = df.dropna(axis=0)
df = df.iloc[:,1:]


df.to_csv(filename)
