#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
#include <math.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");
	task1();
	system("pause");
	

}
int task1()
{
	int years;
	printf("Введите год");
	scanf("%d", &years);
	if (years%4==0 && years%100!=0 || years%400==0) 
	{
		printf("Год %d високосный", years);
	}
	else 
	{
		printf("Год %d не високосный",years);
	}

}
