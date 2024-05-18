#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	printf("Eta programma vychislyaet modul chisla\n");
	for (a = 1; a != 0;)
	{
		printf("Vvedite celoe chislo, esli xotite vyiti iz cikla, to vvedite 0\n ");
		scanf_s("%d", &a);
		if (a == 0);
		else
		{
			a = abs(a);
			printf("Polozhitelnoe chislo: %d\n", a);
		}
	}
	printf("Konec");
}