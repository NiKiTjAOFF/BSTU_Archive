#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

#define N 12
int main()
{
	int i, a, A[N] = { 0 }, B[N / 3] = { 0 };
	printf("Eta programma schitaet summu kazhdoy troyki chisel massiva A i zapisivaet znachenie v massiv B\nVvedite chislo kratnoe 3\n");
	if (N % 3 == 0)
	{
		printf("Massiv A imeet %i elementa(ov), massiv B imeet %i elementa(ov)\n", N, N / 3);
		for (i = 0; i < N; i++)
		{
			printf("Vvedite celoe znachenie elementa massiva A[%i]: ", i);
			scanf("%i", &A[i]);
		}
		for (i = 0, a = 0; i < N; i += 3, a +=1 )
		{
			B[i] = A[i] + A[i + 1] + A[i + 2];
			printf("Massiv B[%i]=%i\n",a, B[i]);
		}
	}
	else
	{
		printf("Vy vveli chislo %i, kotoroe ne kratno 3, teper vam nuzhno perezapustit programmu, sami vinovaty\n", N);
	}
	printf("Konec");
}