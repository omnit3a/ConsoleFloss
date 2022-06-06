@echo OFF
cd Build
xcopy ..\Source /e
gcc -o test-app.exe test-cases.c ConsoleFrame.c ConsoleColor.c
start test-app.exe
del /f ConsoleFrame.c, ConsoleFrame.h, ConsoleColor.c, ConsoleColor.h
pause
