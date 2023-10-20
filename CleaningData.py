# this is to use for Cleaning data script
#adjust csv name, row number (where to read from, 12) and column number (where to read from, 1)

import pandas as pd

df = pd.read_csv("d1.csv")


df = df.iloc[12:,:]
df = df.iloc[:,1:]
df = df.dropna(axis=0)

df.to_csv("d1_clean.csv")