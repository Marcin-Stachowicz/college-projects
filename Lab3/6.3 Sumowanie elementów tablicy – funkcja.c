#include <stdio.h>

int suma_tab(int tab[], int size) {
	
	int i;
	int sum = 0;
	
	for (i = 0; i < size; ++i) {
		sum += tab[i];
	}
	
	return sum;
}

int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int suma_tab(int tab[], int size);

int main(void) {
	
	int size = sizeof(a) / sizeof(a[0]);
	int sum = suma_tab(a, size);
	printf("Suma elementow w tablicy: %d\n", sum);
}
