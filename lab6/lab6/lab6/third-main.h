#pragma once
#include <iostream>
using namespace std;
void thirdMain()
{
    int nSymbols = 0;
    unsigned char symbol;

    cout << "������� ���������� ��������: ";
    cin >> nSymbols;

    for (int i = 0; i < nSymbols; i++) {
        cout << "������� �����: \n";
        cin >> symbol;
        if (symbol <= 0x39 && 0x30 <= symbol)
        {
            int symbcode = int(symbol);
            cout << "���, ��������������� ������� �������: " << symbcode << '\n';
        }
        else
        {
            cout << "������: ������������ ����.\n";
        }
    }
}