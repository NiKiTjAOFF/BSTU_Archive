#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int x, y, z, num1, num2, num3;
	printf("Vvedite 3 raznyx celyx chisla: ");
	scanf_s("%i %i %i", &x, &y, &z);
	if (x > y && x > z)
	{
		num1 = x;
		if (y > z)
		{
			num2 = y;
			num3 = z;
		}
		else
		{
			num2 = z;
			num3 = y;
		}
	}
	if (y > x && y > z)
	{
		num1 = y;
		if (x > z)
		{
			num2 = x;
			num3 = z;
		}
		else
		{
			num2 = z;
			num3 = x;
		}
			
	}
	if (z > x && z > y)
	{
		num1 = z;
		if (x > y)
		{
			num2 = x;
			num3 = y;
		}
		else
		{
			num2 = y;
			num3 = x;
		}
	}
	printf("%i %i %i", num1, num2, num3);
}
