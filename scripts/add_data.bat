@echo off
setlocal enabledelayedexpansion

set "base_path=./data/data_from_PC/Newdata/Newdata"
set "script_path=./src/clean.py"
set "output_dir=./data/raw"
set "log_file=scripts/add_data_error_log.txt"

:: Iterate through files in the directory
for %%F in ("%base_path%\*") do (
    set "full_file=%%~nxF"
    for %%A in ("!full_file:~0,1!") do (
        set "current_word=%%~xA"
        set "input_file=!base_path!\!current_word!"
        
        if exist "!input_file!" (
            python "!script_path!" "!input_file!" !current_word! || (
                echo Error processing !current_word! >> "!log_file!"
            )
            dvc add "!output_dir!\!current_word!" || (
                echo Error adding !current_word! to DVC >> "!log_file!"
            )
            git add "!output_dir!\!current_word!.dvc" || (
                echo Error adding DVC file for !current_word! to Git >> "!log_file!"
            )
        )
    )
)

if exist "!log_file!" (
    echo Errors occurred. Check "!log_file!" for details.
) else (
    echo Done!
)

exit /b 0
