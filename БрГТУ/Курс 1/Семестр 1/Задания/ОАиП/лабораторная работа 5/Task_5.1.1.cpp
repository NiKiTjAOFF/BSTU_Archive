#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	printf("Eta programma vychislyaet modul celogo chisla\n");
	printf("Vvedite nachalnoe celoe chislo: ");
	scanf_s("%d", &a);
	while (a != 0)
	{
		a = fabs(a);
		printf("polozhitelnoe chislo: %d", a);
		printf("\nVvedie celoe chislo, esli xotite vyiti iz cikla, to vvedite 0\n");
		scanf_s("%d",&a);
	}
	printf("\nkonec");
}