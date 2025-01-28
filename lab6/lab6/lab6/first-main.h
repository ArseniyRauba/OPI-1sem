#pragma once
#include <iostream>
using namespace std;
void firstMain()
{
    int nSymbols = 0;
    unsigned char symbol;

    cout << "Введите количество символов: ";
    cin >> nSymbols;

    for (int i = 0; i < nSymbols; i++) {
        cout << "Введите символ: ";
        cin >> symbol;
        if (symbol <= 0x7a && 0x41 <= symbol)
        {
            int UCcode = (int)toupper(symbol);
            int LCcode = (int)tolower(symbol);
            int diff = LCcode - UCcode;
            cout << "Разница значений кодов в ASCII буквы в прописном и строчном написании: " << diff << '\n';
        }
        else
        {
            cout << "Ошибка: введенный символ не является латинской буквой.\n";
        }
    }
}