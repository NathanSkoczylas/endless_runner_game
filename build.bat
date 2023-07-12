@echo off

REM Set the build directory
set BUILD_DIR=build

REM Set project source directory
set PROJECT_DIR=.

REM Create build directory
if not exist %BUILD_DIR% mkdir %BUILD_DIR%


REM Build project
cmake -S %PROJECT_DIR% -B %BUILD_DIR%

timeout 3