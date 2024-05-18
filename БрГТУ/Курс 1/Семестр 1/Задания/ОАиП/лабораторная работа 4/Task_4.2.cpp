#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	float a, b, c;
	printf("Vvedite 2 chisla: ");
	scanf("%f %f", &a, &b);
	if (a > b)
	{
		c = 5 * a + b;
	}
	if (a == b)
	{
		c = -125;
	}
	if (a < b)
	{
		c = (a - 5) / b;
	}
	printf("Resultat:c=%.3f", c);
}