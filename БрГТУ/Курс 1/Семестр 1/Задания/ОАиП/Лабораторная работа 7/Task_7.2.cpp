#include <math.h>
#include <stdio.h>

int main()
{
    int **A, **B, a, b, c, d, maxstr, maxsto, minOfmaxsto, minofmaxstr, str, sto;
    printf("Eta programma ishet minimalnoe znachenie iz maksimalnyx znacheniy stolbca i stroki i dobavlyaet stroku s elementami\n");
    printf("stroki: "); scanf("%d", &str); printf("stolbcy: "); scanf("%d", &sto);
    A = new int* [str]; B = new int* [str + 1];
    for (a = 0; a < str; a++)A[a] = new int[sto];
    printf("Vvodite elementy massiva:  ");
    for (a = 0; a < str; a++)
    {
        for (b = 0; b < sto; b++)
        {
            scanf("%i", &A[a][b]);
        }
    }
    printf("Massiv A: \n");
    for (a = 0; a < str; a++)
    {
        for (b = 0; b < sto; b++)
        {
            printf("%i ", A[a][b]);
        }
        printf("\n");
    }
    for (a = 0, minofmaxstr = 0; a < str; a++) {
        for (b = 0, maxstr = A[a][b]; b < sto; b++) {
            if (maxstr < A[a][b]) maxstr = A[a][b];
        }
        if (a == 0) minofmaxstr = maxstr;
        else if (minofmaxstr > maxstr) minofmaxstr = maxstr;
    }
    for (b = 0, minOfmaxsto = 0; b < sto; b++) {
        for (a = 0, maxsto = A[a][b]; a < str; a++) {
            if (maxsto < A[a][b]) maxsto = A[a][b];
        }
        if (b == 0) minOfmaxsto = maxsto;
        else if (minOfmaxsto > maxsto) minOfmaxsto = maxsto;
    }
    printf("Minimalnoe iz maksimalnix znacheniy vsex strok massiva A: %i\n", minofmaxstr);
    printf("Minimalnoe iz maksimalnix znacheniy vsex stolbcov massiva A: %i\n", minOfmaxsto);
    printf("Vvedite nomer novoy stroki ");
    scanf("%i", &c); d = c - 1;
    printf("Vvedite elementy novoy stroki(%i): \n", sto);
    for (a = 0; a < str + 1; a++)B[a] = new int[sto];
    for (a = d, b = 0; b < sto; b++) {
        scanf("%i", &B[a][b]);
    }
    for (a = 0; a < str + 1; a++) {
        if (a != d) {
            for (b = 0; b < sto; b++) {
                if (a < d) B[a][b] = A[a][b];
                else B[a][b] = A[a - 1][b];
            }
        }
    }
    printf("Noviy massiv A: \n");
    for (a = 0; a < str + 1; a++) {
        for (b = 0; b < sto; b++) {
            printf("%i ", B[a][b]);
        }
        printf("\n");
    }
    printf("Konec");
}
