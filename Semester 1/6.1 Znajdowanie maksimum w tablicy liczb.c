#include <stdio.h>
#include <stdlib.h>

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

	double max_val = tab[0];
	int max_index = 0;
	
	for (i = 1; i < n; ++i ) {
		
		if (tab[i] > max_val) {
			max_val = tab[i];
			max_index = i;
		}
	}

	
	printf("Maksimum: %f\n", max_val);
	printf("Indeks wartosci maksiumum: %d\n", max_index);

	return 0;
}

