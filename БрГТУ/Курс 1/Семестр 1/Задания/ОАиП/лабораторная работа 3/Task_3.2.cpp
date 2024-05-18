#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	float x = -15.246, y = 4.642 * pow(10, -2), z = 20.001 * pow(10, 2), a;
	printf("First number: x=%.3f\nSecond number: y=%.3f\nThird number: z=%.3f\n",x,y,z);
	a = log(pow(y, -sqrt(fabs(x)))) * (x - y / 2) + pow(sin(atan(z)), 2);
	printf("Result: a=%.3f", a);
}