#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
#include <math.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");
	task1();

}
int task1()
{
	
	/*char c;
	int i;*/
	float f;
	/*double d;*/
	

	/*puts("введите число");
	scanf("%c", &c);
	printf("%c \n", c);
	
	puts("введите число");
	scanf("%d", &i);
	printf("%d \n", i);
	
	puts("введите число");
	scanf("%g", &f);
	printf("%g \n", f);
	
	puts("введите число");
	scanf("%lg", &d);
	printf("%lg \n", d);*/

	puts("введите число");
	scanf("%g", &f);
	printf(" Целая часть числа %g - %.1g \n", f, f);
	printf(" Дробная часть числа %g - %g \n", f, f - (int)f);
	

}
