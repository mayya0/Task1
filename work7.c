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
	/*task1();*/
	task2();
	home();
}

int task1()

{
	char c;
	printf("Введите символ ");
	scanf("%c", &c);//считывание с консоли
	switch (c)
	{
	case '0': 
	case '1': 
	case '2': 
	case '3':
	case '4': 
	case '5': 
	case '6': 
	case '7':
	case '8': 
	case '9':
		printf("Введено число\n");
		break;
	case 'A': 
	case 'B': 
	case 'C': 
	case 'D':
	case 'E': 
	case 'F': 
	case 'G': 
	case 'H':
	case 'I': 
	case 'J': 
	case 'K': 
	case 'L':
	case 'M': 
	case 'N': 
	case 'O': 
	case 'P':
	case 'Q': 
	case 'R': 
	case 'S': 
	case 'T':
	case 'U': 
	case 'V': 
	case 'W': 
	case 'X':
	case 'Y': 
	case 'Z':
	case 'a': 
	case 'b': 
	case 'c': 
	case 'd':
	case 'e': 
	case 'f': 
	case 'g': 
	case 'h':
	case 'i': 
	case 'j': 
	case 'k': 
	case 'l':
	case 'm': 
	case 'n': 
	case 'o': 
	case 'p':
	case 'q': 
	case 'r': 
	case 's': 
	case 't':
	case 'u': 
	case 'v': 
	case 'w': 
	case 'x':
	case 'y': 
	case 'z':
		printf("'Введена цифра \n");
		break;
	default:
		printf("Веден символ\n");
	}

	return 0;

}
int task2()

{
	char c;
	float x, y;
	printf("Введите операцию и операнды ");
	scanf("%f %c %f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("x+y = %f", x+y);
		break;
	case '-':
		printf("x-y = %f", x-y);
		break;
	case '/':
		printf("x/y = %f", x/y);
		break;
	case '*':
		printf("x*y = %f", x*y);
		break;
	case '^':
		printf("x^y = %f", pow(x,y));
		break;
	case 'sin':
		printf("sin x(y) = %f", sin(x, y));
		break;
	default:
		printf("ошибка\n");
	}

}
int home()

{
	int chas;
	printf("Который час");
	scanf("%d", &chas);
	switch (chas)
	{
	case '0':
		printf("Доброй ночи");
		break;

	default:
		printf("ошибка\n");
	}

}
