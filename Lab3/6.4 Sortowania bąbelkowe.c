#include <stdio.h>
#include <stdlib.h>

void bubble_sort(double tab[], int size) {
    int i, j, swaps;
    double temp;
    do {
        swaps = 0;
        for (i = 0; i < size - 1; i++) {
            if (tab[i] > tab[i + 1]) {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                swaps++;
            }
        }
        for (i = 0; i < size; i++) {
            printf("%f ", tab[i]);
        }
        printf("\n");
    } while (swaps != 0);
}

int main() {
	int i;
	const int n = 10;
	double tab[n];

	for (i = 0; i < n; ++i ) {
		tab[i] = (rand()/(RAND_MAX + 1.0));
	}

	printf("Poczatkowa tablica: \n");
	for (i = 0; i < n; ++i ) {
		printf("%f ", tab[i]);
	}
	printf("\n");
	
	printf("Sortuje...\n");
	bubble_sort(tab, n);
	
	printf("Posortowana tablica: \n");
	for (i = 0; i < n; ++i ) {
		printf("%f ", tab[i]);
	}
	
	printf("\n");
	
	return 0;
}

