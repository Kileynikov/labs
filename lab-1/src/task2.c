#include <stdio.h>
#include <math.h>
#include <locale.h>

double f(double x)
{
	return (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9));
}

int main()
{
	double x, y;
	setlocale(LC_ALL, "RUS");

	printf("������� x:\n");
	scanf("%lf", &x);
	y = f(x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	system("pause");
	return 0;
}