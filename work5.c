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
	/*task1();
	task2var3();
	task3var3();*/
	homevar29();


}
int task1()
{
	float gr;
	puts("\nВведите градусную меру угла\n");
	scanf("%f", &gr);
	printf("\n Синус %.1f град = %lf радиан\n",gr, sin(gr * M_PI / 180));
}
int task2var3()
{
	double p = 0.5;
	double x;
	puts("\nВведите x\n");
	scanf("%lf", &x);
	double a = log(pow(p, 2) + pow(x, 3));
	double b = exp(sqrt(fabs(x)));
	double powa = pow(a, 3);
	double powb = pow(b, 2);
	double y = powa / powb;
	printf("\ny=%.4lf\n", y);
}
int task3var3()
{
	double p = 0.5;
	double x;
	puts("\nВведите x\n");
	scanf("%lf", &x);
	double a = log(pow(p, 2) + pow(x, 3));
	double b = exp(sqrt(fabs(x)));
	double powa = pow(a, 3);
	double powb = pow(b, 2);
	double y = powa / powb;
	printf("\ny=%.4lf\n", y);

	int A = (int)a;
	int B = (int)b;
	int C = (int)y;
	int usl1 = (A % 2 == 0) ^ (B % 2 == 0);/*только одно из чисел А и В четное, побитовое исключающее ИЛИ*/
	printf("\nУсловие 1 выполнено (1 - да, 0 - нет): %d\n", usl1);

	int usl2 = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);/*каждое из чисел А,В,С кратно трем, логическое И*/
	printf("\nУсловие 2 выполнено (1 - да, 0 - нет): %d\n", usl2);
}
int homevar29()
{
	float x;
	puts("\nВведите x\n");
	scanf("%f",&x);
	float y;
	puts("\nВведите y\n");
	scanf("%e", &y);
	float res1 = 3 + exp(y-1);
	float res2 = 1+ pow(x,2)*fabs(y-tan(x));
	float res3 = res1 / res2;
	float res4 = pow(fabs(y-x),3);
	float res5 = 50*(res4/3);
	float result = res3 + res5;
	printf("\nF(x,y)=%.3f\n", result);
}
