#include <stdio.h> 


 
int main() {
 
	int i,j,suma; 
	
	
	for(i=0; i<=10; i++) { 
	
	
	printf("%d \t", i);
	
	
		for(j=1; j<=10; j++) { 
			
			
			suma = i+j;
			printf("%d \t", suma);    
		} 

	printf("\n");
	
	} 
	
	
	return 0;
}
