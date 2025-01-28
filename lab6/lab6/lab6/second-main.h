#pragma once
#include <iostream>
using namespace std;
void secondMain()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int nSymbols = 0;
    unsigned char symbol;

    cout << "Введите количество символов: ";
    cin >> nSymbols;

    for (int i = 0; i < nSymbols; i++) {
        cout << "Введите символ: ";
        cin >> symbol;

        if (symbol <= 0xff && 0xc0 <= symbol) {
            int UCcode = (int)toupper(symbol);
            int LCcode = (int)tolower(symbol);
            int diff = LCcode - UCcode;
            cout << "Разница значений кодов в Windows-1251 буквы в прописном и строчном написании: " << diff << '\n';
        }
        else {
            cout << "Ошибка: введенный символ не является русской буквой.\n";
        }
    }
}