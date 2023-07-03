#include <stdio.h>
#include <string.h>
#define MAX 20

int main(int argc, char *argv[]) {
  int i;
  char haslo[MAX];
  char wzor[MAX] = "tajne";
  int proby = 3;

  printf("Podaj haslo: \n");
  while (proby > 0) {
    gets(haslo);
    if (strcmp(haslo, wzor) == 0) {
      printf("Haslo poprawne!\n");
      break;
    } else {
      printf("Haslo niepoprawne, sprobuj ponownie (%d prob pozosta³o).\n", proby - 1);
      proby--;
    }
  }

  if (proby == 0) {
    printf("Haslo niepoprawne, przekroczono limit prob.\n");
  }

  return 0;
}

