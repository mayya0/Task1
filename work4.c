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
	task2();
	system("pause");
	task3();
	system("pause");
	home();

}
int task1()
{
	char c;
	int i;
	float f;
	double d;

	puts("введите символ");
	scanf("%c", &c);

	puts("введите число");
	scanf("%d", &i);

	puts("введите число");
	scanf("%f", &f);

	puts("введите число");
	scanf("%le", &d);

	printf("%c %d %f %le\n", c, i, f, d);

	printf("Целая часть числа - %d Дробная часть числа - %f\n", (int)f, f - (int)f);

	printf("%x %d\n", c, c);

	float b = 1 / (float)i;
	printf("%f\n", b);

}
int task2()
{
	int a = 11;
	int b = 3;

	printf("%d,%f,%le \n", a / b, (float)a / b, (double)a / b);

}
int task3()
{
	int n;
	puts("Введите n\n");
	scanf("%d", &n);
	printf("Последняя цифра %d, первая - %d, сумма цифр равна %d\n", n % 10, n / 100, n % 10 + n / 100 + n / 10 % 10);
	printf("Число наоборот: %d%d%d\n", n % 10, n / 10 % 10, n / 100);

}
int main()
{
	float R, W;
	puts("Введите сумму, внесенную в банк\n");
	scanf("%f", &R);
	puts("Введите процент\n");
	scanf("%f", &W);

	float s1 = R + W * (R / 100);
	float s2 = s1 + W * (s1 / 100);
	float s3 = s2 + W * (s2 / 100);
	float s4 = s3 + W * (s3 / 100);
	float s5 = s4 + W * (s4 / 100);
	float s6 = s5 + W * (s5 / 100);

	printf("Через два месяца у клиента будет %f рублей\n", s2);
	printf("Через три месяца у клиента будет %f рублей\n", s3);
	printf("Через пол года у клиента будет %f рублей\n", s6);
}
