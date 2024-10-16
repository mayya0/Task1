#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	/*task0();
	task2zvezd();
	task3zvezd();
	taskramochka();
	task1();
	task1a();*/
	task2var5();
}

int task0()
{
	int d;
	char c;
	printf("Ввдите переменную и символ ");
	scanf("%d %c", &d, &c);
	for (int start = 1; start <= 1; start++) putchar('+');
	   for (int start = 1; start <= d; start++) putchar(c);
	       for (int start = 1; start <= 1; start++) putchar('+');
	

}
int task2zvezd()
{
	int g;
	char m,n;
	printf("Ввдите переменную и два символа  ");
	scanf("%d %c %c", &g, &m, &n);
	for (int start = 1; start <= g; start++) putchar(m);
	   for (int start = 1; start <= g; start++) putchar(n);
}
int task3zvezd()
{
	int d1;
	char c1;
	printf("Ввдите переменную и символ ");
	scanf("%d %c", &d1, &c1);
	for (int start = 1; start <= d1; start++) putchar(c1),putchar('!');
}
int taskramochka()
{
	putchar('!');
	    for (int start = 1; start <= 4; start++) putchar('*');
		for (int start = 1; start <= 4; start++) {
			putchar('*');
			putchar('\n');
		}
		putchar('!');
		for (int start = 1; start <= 5; start++) putchar('*');
		    
}
task1()
{
	int m, n;
	int S=0,k=0;
	printf("Введите значение m:"); scanf("%d", &m);
	printf("Введите значение n:"); scanf("%d", &n);
	for (int I = m; I >= n; I--) {
		S += I;  printf("\nВыполнено %d раз", k++);
	} printf("\nРезультат %d\n", S);
}


task1a()
{
	int n, res;
	double res2;
	puts("введите диапазон вычислений\nv");
	scanf("%d", &n);
	res = 1;
	for (int i = 0; i <= n; i++)
	{
		if (i != 0)
		{
			res *= 2;
		}
		else res = 1;
		printf("2 ^ %d = %d\n", i, res);
		if (i == n) res2 = res / 1024;
	}
	printf("Результат: %.1lfK", res2);
	for (int i = 0; i <= n; i++)
	{
		if (i < 10)
		{
			if (i != 0)
			{
				res *= 2;
			}
			else res = 1;
			printf("\n2 ^ %d = %d", i, res);
		}
		else
		{
			res *= 2;
			printf("2 ^ %d = %.1lfK\n", i, (double)res / 1024.);
		}
	}
}
task2var5()
{

	double start = 0.1;
	double end = 2.2;
	double step = 0.1;
	double x;
	printf("\nВведите значение шага табуляции\n");
	scanf("%lf", &x);

	printf("\n Функция: y=x^2 - cos^2(x+1)\n");
	
	for (x; x <= end; x += step) {
		printf("| %lf | %lf |\n", x, x* x - pow(cos(x - 1), 2));
	}
	    printf("|__________|__________|\n");
}
