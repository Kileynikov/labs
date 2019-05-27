#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "func.h"


int main()
{
	setlocale(LC_ALL, "RUS");

	printf("¬ведите x:\n");
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	system("pause");
	return 0;
}