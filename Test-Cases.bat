@echo OFF
cd Build
xcopy ..\Source /e
gcc -o test-app.exe test-cases.c ConsoleFrame.c ConsoleColor.c ConsoleProgress.c -lm
start test-app.exe
del /f ConsoleFrame.c, ConsoleFrame.h, ConsoleColor.c, ConsoleColor.h, ConsoleProgress.c, ConsoleProgress.h
pause
