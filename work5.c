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
	task1();
	task2var3();

}
int task1()
{
	float gr;
	puts("Введите градусную меру угла\n");
	scanf("%f", &gr);
	printf("В синус %.1f град = %lf радиан\n",gr, sin(gr * M_PI / 180));
}
int task2var3()
{
	double p = 0.5;
	double x;
	puts("Введите x\n");
	scanf("%lf", &x);
	double a = log(pow(p, 2) + pow(x, 3));
	double b = exp(sqrt(fabs(x)));
	double powa = pow(a, 3);
	double powb = pow(b, 2);
	double y = powa / powb;
	printf("y=%.4lf\n", y);
}
