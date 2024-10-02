#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2var13();
	task3var29();


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
	int x;
	printf("\nВведите x\n");
	scanf("%d", &x);
	if (x > 3)
	{
		printf("\n%d\n", (- 3 * x) + 9);
	}
	else
	{
		printf("\n%d\n", pow(x,3)/(pow(x,2)+8));
	}
}
int task3var29()
{
	int x;
	
	printf("\nВведите x\n");
	scanf("%d", &x);
	int y;
	printf("\nВведите y\n");
	scanf("%d", &y);
	if ( 9>x>100 && 9>y>100)
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
		printf("\nЧисла %d%d не являются двухзначным\n", x,y);
	}
}
