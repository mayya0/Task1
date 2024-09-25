#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
#include <math.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");
	/*task1();
	system("pause");
	task2();
	system("pause");
	task3();*/
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
	
	float b = 1/(float)i;
	printf("%f\n", b);

}
int task2()
{
	int a = 11;
	int b = 3;

	printf("%d,%f,%le \n", a/b, (float)a/b, (double)a/b);

}
int task3()
{
	int n;
	puts("Введите n\n");
	scanf("%d", &n);
	printf("Последняя цифра %d, первая - %d, сумма цифр равна %d\n", n%10, n/100, n%10+n/100+n/10%10);
	printf("Число наоборот: %d%d%d\n", n % 10, n / 10 % 10, n / 100);

}
int home()
{
	/* Клиент внес в банк R рублей. Каждый месяц эта сумма увеличивается на W процентов.
	Cколько будет у клиента денег через два месяца, три месяца, через полгода? */

	float R,W;
	puts("Введите сумму, внесенную в банк\n");
	scanf("%f",&R);
	puts("Введите процент\n");
	scanf("%f",&W);

	float summ1month = R+ W*(R/100);
	float summ2month = summ1month + W*(summ1month/100);
	float summ3month = summ2month + W*(summ2month/100);
	float summ4month = summ3month + W*(summ3month/100);
	float summ5month = summ4month + W*(summ4month/100);
	float summ6month = summ5month + W*(summ5month/100);

	printf("Через два месяца у клиента будет %f рублей\n", summ2month);
	printf("Через три месяца у клиента будет %f рублей\n", summ3month);
	printf("Через пол года у клиента будет %f рублей\n", summ6month);

}
