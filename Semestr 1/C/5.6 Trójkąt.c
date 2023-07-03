#include <stdio.h>



int main() {
	
	int i, j, wys;
	
	
	printf("Podaj wysokosc trojkata:");
	scanf("%d", &wys);
	
	
	for (i = 1; i <= wys; i++) {
   	
		for (j = 1; j <= i; j++) {
      	
			printf("*");
		}
	  
		printf("\n");
	} 
  
  
	return 0;
}

