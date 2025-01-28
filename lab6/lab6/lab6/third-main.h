#pragma once
#include <iostream>
using namespace std;
void thirdMain()
{
    int nSymbols = 0;
    unsigned char symbol;

    cout << "Введите количество символов: ";
    cin >> nSymbols;

    for (int i = 0; i < nSymbols; i++) {
        cout << "Введите цифру: \n";
        cin >> symbol;
        if (symbol <= 0x39 && 0x30 <= symbol)
        {
            int symbcode = int(symbol);
            cout << "Код, соответствующий данному символу: " << symbcode << '\n';
        }
        else
        {
            cout << "Ошибка: Некорректный ввод.\n";
        }
    }
}