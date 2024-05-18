#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	float x, y, a, b, c, d;
	printf("Vvedite pervoe drobnoe chislo:\n");
	scanf_s("%f", &x);
	printf("Vvedite vtoroe chislo drobnoe:\n");
	scanf_s("%f", &y);
	a = x + y, b = x - y, c = x * y, d = x / y;
	printf("Summa x+y =%.3f\nRaznost x-y =%.3f\nProizvedenie x*y =%.3f\nChastnoe x/y =%.3f\n", a, b, c, d);
}
