#include <iostream>
#include <cmath>
#include "func.h"
#include <locale.h>

using namespace std;
using namespace do_while_loop;

int main()
{
	setlocale(LC_ALL, "RUS");

	int k;
	double n;

	while(true)
	{
		printf("1) ������� �1\n");
		printf("2) ������� �2\n");
		printf("3) ������� �3\n");
		printf("4) ������� �4\n");
		printf("5) ������� �5\n");
		printf("6) �����\n");

		cin >> k;

		switch(k)
		{
			case 1:
				printf("������� ����� n:\n");

				cin >> k;
				cout << "���������: " << summ(k) << endl;
				break;
			case 2:
				printf("������� ����� eps:\n");

				cin >> n;
				cout << "���������: " << endl;
				cout << summ2(n) << endl;
				break;
			case 3:
				printf("������� ����� n, k:\n");

				cin >> n;
				cin >> k;
				print(n, k);
				break;
			case 4:
				printf("������� ����� eps:\n");

				cin >> n;
				cout << "���������: " << findFirstElement(n) << endl;
				break;
			case 5:
				printf("������� ����� eps:\n");

				cin >> n;
				cout << "���������: " << findFirstNegativeElement(n) << endl;
				break;
			case 6:
				return 1;
			default:
				break;
		}
	}

	return 0;
}

