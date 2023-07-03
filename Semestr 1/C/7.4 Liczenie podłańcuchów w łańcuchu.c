#include <stdio.h>
#include <string.h>

int main(void) {
  char haystack[100];
  char needle[10];
  char *ret;
  int count = 0;

  printf("Wprowadz tekst: ");
  gets(haystack);

  printf("Wprowadz szukana fraze: ");
  gets(needle);

  ret = haystack;
  while ((ret = strstr(ret, needle)) != NULL) {
    count++;
    ret++;
  }

  printf("Szukany fraza wystepuje %d raz/y\n", count);

  return 0;
}

