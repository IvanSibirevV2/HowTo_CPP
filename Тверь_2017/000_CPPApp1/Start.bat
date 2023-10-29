@echo off
cd %~dp0
"C:\Program Files (x86)\C-Free 5\mingw\bin\c++.exe" main.c -o Start.exe
Start.exe
TIMEOUT /T 5
exit /b