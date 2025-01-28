#pragma once
#include <iostream>
using namespace std;
void secondMain()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int nSymbols = 0;
    unsigned char symbol;

    cout << "������� ���������� ��������: ";
    cin >> nSymbols;

    for (int i = 0; i < nSymbols; i++) {
        cout << "������� ������: ";
        cin >> symbol;

        if (symbol <= 0xff && 0xc0 <= symbol) {
            int UCcode = (int)toupper(symbol);
            int LCcode = (int)tolower(symbol);
            int diff = LCcode - UCcode;
            cout << "������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������: " << diff << '\n';
        }
        else {
            cout << "������: ��������� ������ �� �������� ������� ������.\n";
        }
    }
}