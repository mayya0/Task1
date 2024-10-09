#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
#define M_PI            3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");
	//task1();
	task2var13();
	//task3var29();
	//zvezdochka();


}
int task1()
{
	int years;
	printf("\nВведите год\n");
	scanf("%d", &years);
	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)
	{
		printf("\nГод %d високосный\n", years);
	}
	else
	{
		printf("\nГод %d не високосный\n", years);
	}

}
int task2var13()
{
	float x,y;
	printf("\nВведите x\n");
	scanf("%f", &x);
	y = x <= 3 ? (-pow(x,2) + 3*x + 9) : (x/(pow(x,2)+1));
	/*Крольный пример: если x=2, то y=11        если x=7, то y=0,14  */
	printf("%.2f", y);

}
int task3var29()
{
	int x;

	printf("\nВведите x\n");
	scanf("%d", &x);
	int y;
	printf("\nВведите y\n");
	scanf("%d", &y);
	if (9 > x > 100 && 9 > y > 100)
	{
		if (x * y > 2000)
		{
			printf("\nЧисла %d%d превышают 2000\n", x, y);
		}
		else
		{
			printf("\nЧисла %d%d не превышают 2000\n", x, y);
		}
	}
	else
	{
		printf("\nЧисла %d%d не являются двухзначным\n", x, y);
	}
}
int zvezdochka()
{
	double x, y;
	puts("Введите координаты точки (x, y): ");
	scanf("%lf %lf", &x, &y);


	if (pow(x, 2) + pow(y, 2) <= 36 && x >= 0 && y >= 0 && pow(x, 2) + pow(y, 2) > 9)
	{
		printf("Точка принадлежит заштрихованной области.\n");
	}
	else
	{
		printf("Точка не принадлежит заштрихованной области.\n");
	}
}
