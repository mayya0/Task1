#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	
	puts("������� Enter ��� �����������...");
	getchar(); // �������� ������� Enter
	puts("����������� ���������");
	
	return 0;
}