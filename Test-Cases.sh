#!/bin/bash

cp -p -r Source/. Build
cd Build
gcc -o test-app test-cases.c ConsoleFrame.c ConsoleColor.c ConsoleProgress.c
./test-app
rm ConsoleFrame.c ConsoleFrame.h ConsoleColor.c ConsoleColor.h ConsoleProgress.c ConsoleProgress.h
