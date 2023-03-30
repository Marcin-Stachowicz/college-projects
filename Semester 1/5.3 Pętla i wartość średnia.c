#include <stdio.h>
#include <math.h>



int main() {
	
	double a,suma,srednia,i;
	
	
	for(i=0; i<11; i++) {
		
		a = pow(i,2);
		suma = suma + a;
			
	}
		
		
	srednia = suma/10;
		
		
	printf("Srednia z poteg liczb od 1 do 10 to: %lf",srednia);
	
	
	return 0;
}
