#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");
	getchar();
	task1();
	getchar();
	task2();
}
int task1()
{
	
	printf("1\n2\n3\n");
	printf("%d\n %2d\n %3d\n %4d", 1, 2, 3, 4);
	printf("\n%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("Умножение %d на %d равен %d\n ", 2000, 4, 2000 * 4);
	printf("%d разделить %d равно %d\n ", 5., 2., 5. / 2);/*целое десятичное число со знаком*/
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2);/*десятичное число с плавающей запятой xx.xxxx*/
	printf("%g разделить %g равно %g\n ", 5., 2., 5. / 2);/*%f или %e, с выбором по принципу, что короче*/
	printf("%e разделить %e равно %e\n ", 5., 2., 5. / 2);/*десятичное число в виде x.xx e+xx*/
}
int task2()
{
	setlocale(LC_CTYPE, "RUS");
	int N, K;
	N = 10;
	K = 30;
	printf("Сейчас %d часов %d минут 00 секунд\n ",N,K);
	printf("\nИдет %d минута суток\n", N*60+K);
	printf("\nДо полуночи осталось %d часов и %d минут\n",23-N,60-K) ;
	printf("\nС 8.00 прошло %d секунд\n", N*3600+K*60-8*3600);
	printf("\nТекущий час  = %d/24 суток  и текущая минута = %d/60 часа\n", N, K);
	
}