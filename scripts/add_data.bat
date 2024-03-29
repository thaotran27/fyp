@echo off
setlocal enabledelayedexpansion

set "base_path=../steven/steven"
set "script_path=./src/clean.py"
set "output_dir=./data/raw"
set "log_file=scripts/add_data_error_log.txt"

:: Iterate through files in the directory
for %%F in ("%base_path%\*") do (
    set "full_file=%%~nxF"
    echo Processing file: !full_file!
    for /f "delims=" %%A in ("!full_file:~0,1!") do (
        set "current_word=%%A"
        rem Change this to lower case, just to make sure
        for %%A in ("A=a" "B=b" "C=c" "D=d" "E=e" "F=f" "G=g" "H=h" "I=i" "J=j" "K=k" "L=l" "M=m" "N=n" "O=o" "P=p" "Q=q" "R=r" "S=s" "T=t" "U=u" "V=v" "W=w" "X=x" "Y=y" "Z=z") do (
            for /f "tokens=1,2 delims==" %%I in (%%A) do (
                set "current_word=!current_word:%%I=%%J!"
            )
        )
        echo Processing word: !current_word!
        set "input_file=!base_path!\!full_file!"
        
        python "!script_path!" "!input_file!" !current_word! || (
            echo Error processing !current_word! >> "!log_file!"
        )
        :: dvc add "!output_dir!\!current_word!.csv" || (
        ::    echo Error adding !current_word! to DVC >> "!log_file!"
        ::)
        ::git add "!output_dir!\!current_word!.csv.dvc" || (
        ::    echo Error adding DVC file for !current_word! to Git >> "!log_file!"
        ::)
    )
)

if exist "!log_file!" (
    echo Errors occurred. Check "!log_file!" for details.
) else (
    echo Done!
)

exit /b 0
