@echo off

REM Set the build directory
set BUILD_DIR=build

REM Set project source directory
set PROJECT_DIR=.

REM Create build directory
if not exist %BUILD_DIR% mkdir %BUILD_DIR%

REM Set Build type ------------------------------
:: Clean
if /I "%2" == "CLEAN" set CLEAN=1
if /I "%3" == "CLEAN" set CLEAN=1

:: Debug
if /I "%2" == "DEBUG" set BUILD_TYPE=Debug
if /I "%3" == "DEBUG" set BUILD_TYPE=Debug

:: Release
if /I "%2" == "RELEASE" set BUILD_TYPE=Release
if /I "%3" == "RELEASE" set BUILD_TYPE=Release
:: ----------------------------------------------


REM If clean is set, remove all files in the build directory
if DEFINED CLEAN (rd /s /q "%BUILD_DIR%")
if not exist %BUILD_DIR% (mkdir "%BUILD_DIR%")

REM Build project
cmake -S %PROJECT_DIR% -B %BUILD_DIR% -DCMAKE_BUILD_TYPE=%BUILD_TYPE%

REM Report errors
echo ---------------------------------------
if %ERRORLEVEL% EQU 0 ( echo Build successful. ) else ( echo Build failed. Error level: %ERRORLEVEL%)

timeout 3