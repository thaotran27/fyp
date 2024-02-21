@echo off
setlocal enabledelayedexpansion

set "script_path=./src/clean.py"
set "output_dir=./data/raw"
set "log_file=scripts/remove_data_error_log.txt"

:: Define a list of words to process
set "word_list=a b c d e f g h i j k l m n o p q r s t u v w x y z 0"

for %%w in (%word_list%) do (
    set "current_word=%%w"
    set "input_file=!output_dir!/!current_word!.csv.dvc"
    echo !input_file!
    
    if exist !input_file! (
        dvc remove "!input_file!" || (
            echo Error removing DVC file for !current_word! >> "!log_file!"
        )
    )
)

if exist "!log_file!" (
    echo Errors occurred. Check "!log_file!" for details.
) else (
    echo Done!
)

exit /b 0
