#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include<malloc.h>

int main()
{
	int n, del, *A, *B;
	printf("Eta programma schitaet summu kazhdoy troyki chisel massiva A i zapicyvayet znachenie v massiv B i udalyaet element iz massiva\n");
	printf("Vvedite chislo kratnoe 3\n");
	scanf("%d", &n);
	if (n % 3 == 0)
	{
		A = (int*)malloc(n * sizeof(int)); B = (int*)malloc(n / 3 * sizeof(int));
	printf("Vvedite chislo, kotoroe budet udaleno iz massiva B: ");
	scanf("%d", &del);
		printf("Massiv A imeet %d elementov, massiv B imeet %d elementov\n", n, n / 3);
		for (int i = 0; i < n; i++)
		{
			printf("Vvedite celoe znachenie elementa massiva A[%i]: ", i);
			scanf("%d", &A[i]);
		}
		printf("Massiv B: ");
		for (int i = 0, a = 0; i < n; i += 3, a++)
		{
			B[a] = A[i] + A[i + 1] + A[i + 2];
			printf("%d ",B[a]);
		}
		printf("\nMassiv B bez elementov so znacheniem %d: ", del);
		for (int i = 0, c = 0; c < n / 3; c++)
		{
			if (B[c] != del)
			{
				B[i] = B[c];
				printf("%d ", B[i]);
				i++;
			}
		}
	} else
	{
		printf("Vy vveli chislo %i, kotoroe ne kratno 3, teper vam nuzhno perezapustit programmu, sami vinovaty\n", n);
	}																												
	printf("\nKonec");																								
}																													
