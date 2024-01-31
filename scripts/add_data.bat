@echo off
setlocal enabledelayedexpansion

set "base_path=./data/data_from_PC/Newdata/Newdata"
set "script_path=./src/clean.py"
set "output_dir=./data/raw"
set "log_file=scripts/add_data_error_log.txt"

:: Define a list of words to process
set "word_list=a b c d e f g h i j k l m n o p q r s t u v w x y z"

for %%w in (%word_list%) do (
    set "current_word=%%w"
    set "input_file=!base_path!/!current_word!.csv"
    
    if exist "!input_file!" (
        python "!script_path!" "!input_file!" !current_word! || (
            echo Error processing !current_word! >> "!log_file!"
        )
        dvc add "!output_dir!/!current_word!.csv" || (
            echo Error adding !current_word! to DVC >> "!log_file!"
        )
        git add "!output_dir!/!current_word!.csv.dvc" || (
            echo Error adding DVC file for !current_word! to Git >> "!log_file!"
        )
    )
)

if exist "!log_file!" (
    echo Errors occurred. Check "!log_file!" for details.
) else (
    echo Done!
)

exit /b 0
