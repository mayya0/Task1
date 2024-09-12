#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE

#include <math.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");
	system("pause");
	task1();

	
}
int task1()
{
	int num;
	puts("введите число");
	scanf("%d", &num);
	int num1;
	puts("введите число");
	scanf("%d", &num1);
	printf("Сумма чисел %d и  равна %d ",num,num1,num+num1);
	printf("Разность чисел A и B равна %d ", num - num1);
	printf("Произведение чисел A и B равна %d ", num * num1);
	printf("Частное чисел A и B равна %d ", num/num1);

	
	
}
