#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE

#define D 2.54
#define D1 2.32166
#define D2 2.7076

#define M 1.852
#define M1 1.609
#define M2 1.475
#define M3 7.468
#define M4 7.4126

#define R 3.17



#include <math.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");
	
	system("pause");
	home();
	system("pause");
	task1();
	system("pause");
	task2();
	system("pause");
	task21();
	system("pause");
	task3();
	system("pause");
	home();
}
int task1()
{
	int num;
	puts("введите число");
	scanf("%d", &num);
	int num1;
	puts("введите число");
	scanf("%d", &num1);

	printf("Сумма чисел %d и %d равна %d ", num, num1, num + num1);
	printf("Разность чисел %d и %d равна %d ", num, num1, num - num1);
	printf("Произведение чисел %d и %d равна %d ", num, num1, num * num1);
	printf("Частное чисел %d и %d равна %d ", num, num1, num / num1);
}
int task2()
{
	int dym;
	float result;
	puts("\n введите кол-во английских дюймов");
	scanf("%d", &dym);
	result=D*dym;
	printf(" %d дюймов – это % .1f см ", dym, result);
	
	
	puts("\n введите кол-во испанских дюймов");
	scanf("%d", &dym);
	result = D1 * dym;
	printf(" %d дюймов – это % .1f см ", dym, result);
	
	
	puts("\n введите кол-во старолитовских дюймов");
	scanf("%d", &dym);
	result = D2 * dym;
	printf(" %d дюймов – это % .1f см ", dym, result);

}

int task21()
{

	int dym;
	float result;
	puts("\n введите кол-во морских миль");
	scanf("%d", &dym);
	result = (M * dym);
	printf(" %d миль – это %.1f км ", dym, result);


	puts("\n введите кол-во сухопутных миль");
	scanf("%d", &dym);
	result = M1 * dym;
	printf(" %d миль – это %.1f км ", dym, result);


	puts("\n введите кол-во римских миль");
	scanf("%d", &dym);
	result = (M2 * dym);
	printf(" %d миль – это %.1f км ", dym, result);
	
	puts("\n введите кол-во старорусских миль");
	scanf("%d", &dym);
	result = M3 * dym;
	printf(" %d миль – это %.1f км ", dym, result);

	puts("\n введите кол-во географических миль");
	scanf("%d", &dym);
	result = M4 * dym;
	printf(" %d миль – это %.1f км ", dym, result);

}

int task3()
{
	
	int a;
	int b;
	float result, result1, result2;
	puts("\n введите число a");
	scanf("%d", &a);
	system("pause");
	puts("\n введите число b");
	scanf("%d", &b);
	result = a*b;
	result1 = a+b;
	result2 = a-b;
	printf("___________________\n");
	printf("| a*b | a+b | a-b |\n");
	printf("-------------------\n");
	printf("| %d*%d | %d+%d | %d-%d |\n", a, b, a, b, a, b);
	printf("-------------------\n");
	printf("| %.1f| %.1f | %.1f |\n", result, result1, result2);



}
int home()
{
	int r;
	float result;
	puts("\n введите число радиан");
	scanf("%d", &r);
	result = (r/2) * R*R;
	printf(" Площадь сектора равна %d  ", result);


}
