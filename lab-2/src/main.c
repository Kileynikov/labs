#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>

bool isInArea(double, double);
double f(double);

void main()
{
	setlocale(LC_ALL, "RUS");

	int k;
	double x, y;
	
	printf("Выберите номер задания (1 или 2):\n");
	printf("Задание №1\n");
	printf("Задание №2\n");
	scanf("%d", &k);
	printf("\n");

	switch (k)
	{
	case 1:
	{
		printf("Введите x: ");
		scanf("%lf", &x);
		printf("Введите y: ");
		scanf("%lf", &y);
		printf("Результат: %o\n\n", isInArea(x, y));

		break;
	}
	case 2:
	{
		printf("Введите x: ");
		scanf("%lf", &x);
		printf("Результат: %f\n\n", f(x));

		break;
	}
	}

	system("pause");

}


bool isInArea(double x0, double y0)
{
	double x1 = -1, y1 = 1,
		x2 = 1, y2 = 1,
		x3 = -1, y3 = -1,
		s1 = (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0),
		s2 = (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0),
		s3 = (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0);
		
	if (( s1 >= 0 && s2 >= 0 && s3 >= 0 ) || ( s1 <= 0 && s2 <= 0 && s3 <= 0 ))
		return true;
	else
		return false;
}

double f(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return 1 / (pow(x, 3) + 6);
}