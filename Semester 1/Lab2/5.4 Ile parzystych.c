#include <stdio.h>



int main() {
	
	int i,liczba,nieparzyste,parzyste;
	
	
	for(i=1; i<10; i++) {
		
		
		liczba = i%2;
		
		
		if(liczba == 0){
			
			nieparzyste++;
			
		} 	else {
			
				parzyste++;
			}
	}
	
	
	printf("W zakresie od 1 do 10 jest: %d liczb parzystych i %d nieparzystych",parzyste,nieparzyste);


	return 0;
}
