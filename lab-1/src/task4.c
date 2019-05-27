#include <stdio.h>
#include <math.h>
#include <locale.h>

void f();
double x, result;

int main()
{
	setlocale(LC_ALL, "RUS");

	printf("¬ведите x:\n");
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("result = %.4f\n", result);

	system("pause");
	return 0;
}

void f()
{
	result = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9));
}