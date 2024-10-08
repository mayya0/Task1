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
	/*task1();
	task2();*/
	home();
}

int task1()
{
	char c;
	printf("\nВведите символ\n");
	scanf("%c", &c);
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
		printf("\nВведено число\n");
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
		printf("\nВведена цифра\n");
		break;
	default:
		printf("\nВеден символ\n");
	}

	return 0;

}
int task2()

{
	char c;
	float x, y;
	printf("\nВведите операцию и операнды\n");
	scanf("%f %c %f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("x+y = %f", x + y);
		break;
	case '-':
		printf("x-y = %f", x - y);
		break;
	case '/':
		printf("x/y = %f", x / y);
		break;
	case '*':
		printf("x*y = %f", x * y);
		break;
	case '^':
		printf("x^y = %f", pow(x, y));
		break;
	default:
		printf("\n ошибка\n");
	}

}
int home()

{
	
	int chas;
	printf("\n Который у вас час \n");
	scanf("%d", &chas);
	switch (chas)
	{
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
		printf("\nДоброго утра\n");
		break;
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
		printf("\nДоброго дня\n");
		break;
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
		printf("\nДоброго вечера\n");
		break;
	case 23:
	case 0:
	case 1:
	case 2:
	case 3:
		printf("\nСпокойной ночи\n");
		break;

	default:
		printf("\nошибка\n");
	}

	return 0;
}
