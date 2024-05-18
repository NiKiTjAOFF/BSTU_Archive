#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	float a{}, b{}, c;
	int i{};
	printf("Vvedite 2 deystvitelnyx chisla:  ");
	scanf_s("%f %f", a, b);
	printf("vyberite nomer deystviya: 1-clozhenie, 2-vychitanie, 3-ymnozhenie, 4-delenie");
	scanf_s("%i", i);
	switch (i)
	{
	case 1: c = a + b; break;
	case 2: c = a - b; break;
	case 3: c = a * b; break;
	case 4: c = a / b; break;
	default: "Ой, такого числа нет";
	}
	printf("%3.f", c);
}