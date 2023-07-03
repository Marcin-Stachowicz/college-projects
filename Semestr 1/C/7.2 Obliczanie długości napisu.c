#include<stdio.h>

int main(){
	
	char text[] = "Ala ma kota";
	int i,j;
	
	for(i=0; i < sizeof(text); i++){
		j++;
	}
	
	printf("Dlugosc podanego tekstu: %d",j-2);
	return 0;
}
