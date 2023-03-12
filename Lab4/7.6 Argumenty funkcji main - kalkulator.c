#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int main(int argc, char *argv[]) {
    int i,op1,op2,wynik;
    char *operacja[MAX] = {"plus","minus","razy","podziel"};
    printf("argc = %d\n",argc);
    for (i = 0; i<argc; ++i) {
        printf("%s\n", argv[i]);
    }
    // sprawdzanie czy podano odpowiednie argumenty
    if (argc != 4) {
        printf("Niepoprawna liczba argumentow. Uzyj: oblicz argument1 operacja argument2\n");
        return 1;
    }
    op1 = atoi(argv[1]);
    op2 = atoi(argv[3]);
    if (strcmp(argv[2], operacja[0]) == 0) {
        // dzia³anie plus
        wynik = op1 + op2;
        printf("%d %s %d = %d\n", op1, argv[2], op2, wynik);
    } else if (strcmp(argv[2], operacja[1]) == 0) {
        // dzia³anie minus
        wynik = op1 - op2;
        printf("%d %s %d = %d\n", op1, argv[2], op2, wynik);
    } else if (strcmp(argv[2], operacja[2]) == 0) {
        // dzia³anie razy
        wynik = op1 * op2;
        printf("%d %s %d = %d\n", op1, argv[2], op2, wynik);
    } else if (strcmp(argv[2], operacja[3]) == 0) {
        // dzia³anie podziel
        if (op2 != 0) {
            wynik = op1 / op2;
            printf("%d %s %d = %d\n", op1, argv[2], op2, wynik);
        } else {
            printf("Nie mo¿na dzieliæ przez 0!\n");
        }
    } else {
        // niepoprawna operacja
        printf("Niepoprawna operacja. Dostêpne operacje to: plus, minus, razy, podziel.\n");
    }
    return 0;
}

