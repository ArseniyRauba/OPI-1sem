#pragma once
#include <iostream>
using namespace std;
void firstMain()
{
    int nSymbols = 0;
    unsigned char symbol;

    cout << "������� ���������� ��������: ";
    cin >> nSymbols;

    for (int i = 0; i < nSymbols; i++) {
        cout << "������� ������: ";
        cin >> symbol;
        if (symbol <= 0x7a && 0x41 <= symbol)
        {
            int UCcode = (int)toupper(symbol);
            int LCcode = (int)tolower(symbol);
            int diff = LCcode - UCcode;
            cout << "������� �������� ����� � ASCII ����� � ��������� � �������� ���������: " << diff << '\n';
        }
        else
        {
            cout << "������: ��������� ������ �� �������� ��������� ������.\n";
        }
    }
}