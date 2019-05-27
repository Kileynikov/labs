#include <iostream>
#include <cmath>
#include "func.h"
#include <locale.h>

using namespace std;
using namespace for_loop;

int main()
{
	setlocale(LC_ALL, "RUS");
	int k;
	double n;

	while(true)
	{
		printf("1) Задание №1\n");
		printf("2) Задание №2\n");
		printf("3) Задание №3\n");
		printf("4) Задание №4\n");
		printf("5) Задание №5\n");
		printf("6) Выход\n");

		cin >> k;

		switch(k)
		{
			case 1:
				printf("Введите число n:\n");

				cin >> k;
				cout << "Результат: " << summ(k) << endl;
				break;
			case 2:
				printf("Введите число eps:\n");

				cin >> n;
				cout << "Результат: " << endl;
				cout << summ2(n) << endl;
				break;
			case 3:
				printf("Введите числа n, k:\n");

				cin >> n;
				cin >> k;
				print(n, k);
				break;
			case 4:
				printf("Введите число eps:\n");

				cin >> n;
				cout << "Результат: " << findFirstElement(n) << endl;
				break;
			case 5:
				printf("Введите число eps:\n");

				cin >> n;
				cout << "Результат: " << findFirstNegativeElement(n) << endl;
				break;
			case 6:
				return 1;
			default:
				break;
		}
	}

	return 0;
}

