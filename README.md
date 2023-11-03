#GIT AND DVC: DATA MANAGEMENT

Dvc is the dataset version control (git but for dataset). Dvc is integrated because git is not robust to store big data files.

##1.	Download python and DVC
#### a. Download Python 
- Download link: Python.org
- Or in Microsoft store
- Check if you have python in your computer in Terminal:
```
python –version
```

- If pip command not found: reinstall pyton

#### b. Download DVC:
- Download from the dvc website: https://dvc.org/
- or in the terminal
```
pip install dvc
```
- Restart your computer 
- To make sure your dvc is correctly downloaded:
```
dvc --version
```

## 2.	Virtual environment: 
Creating a virtual environment will help with python package conflicts and you won't have to pip install a lot of times

- Create virtual environment, name venv in this case
```
pip install virtualenv
```
```
virtualenv venv 
```
-  Activate the environment

For Windows:
```
.\venv\Scripts\activate.bat
```
or 
```
.\venv\Scripts\activate
```
For Mac
```
source venv\bin\activate
```

- Install python packages:
```
pip install -r requirements.txt
```

> Set up one time, after that you just need to activate.



- Create requirements.txt (you only need to do this when you install a package that is not included in the old requirements.txt file)
```
pip freeze > requirements.txt
```

## 3.	Workflow to make changes to models and rerun the piple
- Pull from git:
```
git pull
```
- Get data
```
dvc fetch
```

```
dvc pull
```
-	Make changes to py code or hyperparameters in yml files and save it

- Rerun the pipeline
```
dvc repro
```
- Check the accuracy and metric details:
```
dvc metrics show
```
- Push the changes to model and train/test data
```
dvc push
```
- Push the changes of metrics and accuracy files to Git
```
git add metrics/.
git commit
git push
```


##4. Workflow for adding new raw data:
- Pull from git:
```
git pull
```
- Get your dataset:
```
dvc fetch
```
```
dvc pull
```
For example you want to add file static_data/O_not_clean.csv with the label "O"
- Run clean.py to clean that data and add it to the back of the official data file in data/raw.

```
src/clean.py static_data/O_not_clean.csv O
```

-	Update the dataset:
```
dvc add data/raw/O.csv
```
```
dvc push
```
- Run the command git add .csv.dvc file (that is printed in the terminal after you run dvc add)
- Commit and push the new data changes 
```
git commit -m "Add data with label O"
```
```
git push
```

>What to do if you key in the command incorrectly (wrong files, wrong label, etc):
>DO NOT DVC ADD OR COMMIT
>-	delete the file
>-	dvc pull (to download the old dataset)

##5. Workflow to edit/create pipeline

Edits and pipeline information is available in dvc.yaml file

- Remove stage
```
dvc remove stage-name
```

- Add stage for prepare
```
dvc stage add -n prepare -d src/prepare.py -d data/raw -o data/prepared/train.csv -o data/prepared/test.csv python src/prepare.py
```
- Add stage for train
```
dvc stage add -n train -d src/train.py -d data/prepared/train.csv -o model/model.joblib python src/train.py
```

- Add stage for evaluate
```
dvc stage add -n evaluate -d src/evaluate.py -d model/model.joblib -M metrics/accuracy.json  python src/evaluate.py
```
```
What does the command options mean:
-n: name
-d: dependency files
-o: output files
```

- Take a look at the DAG (directed acyclic graph) tree:
```
dvc dag 
```

