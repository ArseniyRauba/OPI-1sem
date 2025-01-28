#include <iostream>
#include <windows.h>
#include "first-main.h"
#include "second-main.h"
#include "third-main.h"
#include "fourth-main.h"
#include "default-main.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int option;
	do 
	{
		cout << "1. Определение разницы значений кодов в ASCII буквы в прописном и строчном написании для символов латинского алфавита.\n";
		cout << "2. Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании для символов русского алфавита.\n";
		cout << "3. Вывод в консоль кода символа, соответствующего введенной цифре.\n";
		cout << "4. Выход из программы.\n";
		cin >> option;
		switch (option) 
		{
			case 1:
				firstMain();
			break;

			case 2:
				secondMain();
			break;

			case 3:
				thirdMain();
			break;

			case 4:
				fourthMain();
			break;

			default:
				defaultMain();
			break;
		}
	} while (option != 4);
}