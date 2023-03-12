#include <stdio.h>
#include <stdlib.h>

int maximum(double tab[], int size) {
	int i;
	double max_val = tab[0];
	int max_index = 0;
	for (i = 1; i < size; ++i ) {
		if (tab[i] > max_val) {
			max_val = tab[i];
			max_index = i;
		}
	}
	return max_index;
}

int main() {
	int i;	
	const int n = 10;
	double tab[n];

	for (i = 0; i < n; ++i ) {
		tab[i] = (rand()/(RAND_MAX + 1.0));
	}

	printf("Zawartosc tablicy:\n");
	for (i = 0; i < n; ++i ) {
		printf("%f ", tab[i]);
	}
	printf("\n");

	int max_index = maximum(tab, n);

	printf("Maksimum: %f\n", tab[max_index]);
	printf("Indeks wartosci maksiumum: %d\n", max_index);

	return 0;
}

