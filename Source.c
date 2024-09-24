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
	puts("¬ведите символ:");
	scanf("%c", &c);
	puts("¬ведите целое число:");
	scanf("%i", &i);
	puts("¬ведите вещественное число:");
	scanf("%f", &f);
	puts("¬ведите вещественное число с двойной точностью:");
	scanf("%d", &d);


	printf("char = %c\n int = %i\n float = %f\n double = %lf", c, i, f, d);
}