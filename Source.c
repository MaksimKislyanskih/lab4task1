#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	char c = '!';
	int i;
	float f;
	double d;
	puts("������� ������:");
	scanf("%c", &c);
	puts("������� ����� �����:");
	scanf("%i", &i);
	puts("������� ������������ �����:");
	scanf("%f", &f);
	puts("������� ������������ ����� � ������� ���������:");
	scanf("%d", &d);


	printf("char = %c\n int = %i\n float = %f\n double = %lf", c, i, f, d);
}