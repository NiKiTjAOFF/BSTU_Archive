#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	float a, b, h, fx, x;
	a = 1; b = 2; h = 0.2;
	x = a - h;
	printf("Programma vychislyaet znachenie funkcii na opredelennix znacheniyax\n");
	do
	{
			x = x + h;
			if (x>= 7*h && x<=8*h);
		else
		{
			fx = cos(x) * exp(-x);
			printf("Znachenie funkcii v tochke x=%f: fx=%f\n", x, fx);
		}
		} while (x>=a && x<b);
	printf("Konec");
}