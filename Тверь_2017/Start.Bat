:: отключение предварительног вывода команды в консоль перед исполнением
@echo off
:: Переход в папку, к которой находится исполняемый батник
cd %~dp0
:: Находим в недрах С-Free компилятор и шлем свой файлик туда.
:: Помечаем пораметром название файла после компиляции
"C:\Program Files (x86)\C-Free 5\mingw\bin\c++.exe" main.c -o Start.exe
:: запускаем результат компиляции
Start.exe
:: 5 секунд радуемся осторожненько
TIMEOUT /T 5
:: аккуратно выключаем батничеГ.
exit /b        
