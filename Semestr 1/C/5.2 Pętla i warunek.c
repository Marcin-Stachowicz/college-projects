#include <stdio.h>



int main() {
	
	int i,suma;
	
	
	for(i=0; i<100; i++ ) {
		
		if(i>3) {
			
			suma++;
			
		}
	}
		
		
	printf("Liczb wiekszych od 3, z zakresu 1-100 jest: %d", suma);
	
	
	return 0;
}
