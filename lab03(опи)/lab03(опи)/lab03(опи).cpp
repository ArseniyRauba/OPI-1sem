#include <iostream>

// RaubaArseniy2006
// Win-1251 5200 6100 7500 6200 6100 4100 7200 7300 6500 6e00 6900 7900 3200 3000 3000 3600 0000
// UTF-8 52 61 75 62 61 41 72 73 65 6e 69 79 32 30 30 36 0d 0a
// UTF-16 52 61 62 61  41 72 73 65 6E A1 79  32 30 30 36 00

//РаубаАрсенийВладимирович2006
// Win-1251 20 04 30 04 43 04 31 04 30 04 10 04 40 04 41 04 35 04 3d 04 38 04 39 04 12 04 3b 04 30 04 34 04 38 04 3c 04 38 04 40 04 3e 04 32 04 38 04 47 04 32 00 30 00 30 00 36 00 00 00
// UTF-8 d0a0 d0b0 d183 d0b1 d0b0 d090 d180d181 d0b5 d0bd d0b8 d0b9 d092 d0bb d0b0 d0b4 d0b8 d0bc d0b8 d180 d0be d0b2 d0b8 d087 32 30 30 36 0d 0a 
// UTF-16 d0 e0 f3 e1 e0 c0 f0 f1 e5 ed e8 e9 c2 eb e0 e4 e8 ec e8 f0 ee e2 e8 f7 32 30 30 36 00

// Рауба2006Arseniy
// Win-1251 2004 3004 4304 3104 3004 3200 3000 3000 3600 4100 7200 7300 6500 6e00 6900 7900 00 00
// UTF-8 d0a0 d0b0 d183 d0b1 d0b0 32 30 30 36 41 72 73 65 6e 69 79 0d 0a
// UTF-16 d0 e0 f3 e1 e0 32 30 30 36 41 72 73 65 6e 69 79 00

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int number = 0x12345678;
	char hello [] = "Hello, ";

	char eng[] = "RaubaArseniy2006";
	char rus[] = "РаубаАрсенийВладимирович2006";
	char all[] = "Рауба2006Arseniy";

	wchar_t ENG[] = L"RaubaArseniy2006";
	wchar_t RUS[] = L"РаубаАрсенийВладимирович2006";
	wchar_t ALL[] = L"Рауба2006Arseniy";
	cout << hello << eng << endl;
	return 0;
}