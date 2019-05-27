#include <iostream>
#include <math.h>
#include "complex.h"

using namespace std;

Complex y(double);

int main()
{
	setlocale(LC_ALL, "RUS");
	Complex ex1(10, -5);
	Complex ex2 = 3;
	Complex ex3;

	cout << "ex1 = " << ex1 << endl;
	cout << "ex2 = " << ex2 << endl;
	cout << "ex3 = " << ex3 << endl;
	cout << endl;

	ex3 = ex1 + ex2;
	ex1 /= ex3;
	ex2 *= ex3;

	cout << "ex3 = ex1 + ex2 = " << ex3 << endl;
	cout << "ex1 = ex1 / ex3 = " << ex1 << endl;
	cout << "ex2 = ex2 * ex3 = " << ex2 << endl;
	cout << endl;

	cout << "¬ведите дейтсвительную и мнимую части комплексного числа:" << endl;
	cin >> ex3;
	cout << "ex3 = " << ex3 << endl;

	system("pause");
}

Complex y(double z)
{
	return Complex(2, 3 * exp(-z));
}