#include<stdio.h>

int main(){
	
	int i,j,suma;
	
	for(i=1; i<=10; i++){
		
		for(j=1; j<=10; j++){
			
			suma = i * j;
			printf("%d \t", suma);
		}
		
		printf("\n");
	}
	return 0;
}
