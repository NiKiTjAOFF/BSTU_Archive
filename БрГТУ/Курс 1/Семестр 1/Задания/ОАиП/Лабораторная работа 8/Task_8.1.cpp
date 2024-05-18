#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char s[100], gl[] = { "aeioquyAEIOQUY" },
		sogl[] = { "bcdfghjklmnprstvwxzBCDFGHJKLMNPRSTVWXZ" };
	int soglCol, glCol;
	glCol = 0; soglCol = 0;
	printf("Eta programma opredelyaet kakix bukv v stroke bolshe: glasnyx ili soglasnyx\nVvedite stroku:  ");
	gets(s);
	for (int i = 0; i < strlen(s); i++) {
		if (strchr(sogl, s[i])) soglCol++;
		if (strchr(gl, s[i])) glCol++;
	}
	printf("Kolichestvo soglasnyx: %d\nKolichestvo glasnyx: %d\n", soglCol, glCol);
	if (glCol > soglCol) printf("Glasnyx bolshe chem soglasnyx");
	if (soglCol > glCol) printf("Soglasnyx bolshe chem glasnyx");
	printf("\nkonec");
}
