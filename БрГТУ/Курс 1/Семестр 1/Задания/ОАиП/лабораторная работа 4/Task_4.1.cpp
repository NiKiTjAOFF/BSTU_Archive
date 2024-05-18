#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int x;
	printf("Vvedite celoe chislo:  ");
	scanf("%i", &x);
	printf("Dannoe chislo dvuznachnoe chotnoe:  ");
	if(x>=10 && x < 100 && x % 2 == 0)
	{
		printf("True");
	}
	else {
		printf("false");
	}
}