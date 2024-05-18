#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    printf("Eta programma pishet naturalniye chisla slovami\nVvedite naturalnoe chislo menshe 100: \n");
    scanf("%d", &n);
    if (n < 100 && n >= 0) {
        if (n < 20 && n>9) {
            switch (n) {
            case 10: printf("Десять"); break;
            case 11: printf("Одиннадцать "); break;
            case 12: printf("Двенадцать "); break;
            case 13: printf("Тринадцать "); break;
            case 14: printf("Четырнадцать "); break;
            case 15: printf("Пятнадцать "); break;
            case 16: printf("Шестнадцать "); break;
            case 17: printf("Семнадцать "); break;
            case 18: printf("Восемнадцать "); break;
            case 19: printf("Девятнадцать "); break;
            }
        }
        else {
            switch (n / 10) {
            case 2: printf("Двадцать "); break;
            case 3: printf("Тридцать "); break;
            case 4: printf("Сорок "); break;
            case 5: printf("Пятьдесят "); break;
            case 6: printf("Шестьдесят "); break;
            case 7: printf("Семьдесят "); break;
            case 8: printf("Восемьдесят "); break;
            case 9: printf("Девяносто "); break;
            }if (n % 10 < 10 && n % 10 >= 0 || n < 10 && n >= 0) {
                switch (n % 10) {
                case 0: printf("Ноль "); break;
                case 1: printf("Один "); break;
                case 2: printf("Два "); break;
                case 3: printf("Три "); break;
                case 4: printf("Четыре "); break;
                case 5: printf("Пять "); break;
                case 6: printf("Шесть "); break;
                case 7: printf("Семь "); break;
                case 8: printf("Восемь "); break;
                case 9: printf("Девять "); break;
                }
            }
        }
    }
    else if (n > 100) printf("Vy vveli chislo bolshe 100, prochitayte, shto nuzhno vvesti");
    else if (n < 0) printf("Vy vveli otricatelnoe chislo, prochitayte, shto nuzhno vvesti");
    else printf("Vy vveli 100, prochitayte, shto nuzhno vvesti");
    printf("\nKonec");
}
