#include <stdio.h>



int main() {
	
	int b,bit=0;
	unsigned char c;
	
	printf("Podaj dowolny znak: ");
	scanf("%c",&c);
	
	b=c;
	
	while(b > 0) {
	
		if(b%2 == 1) {
			bit++;
		}
		
		b=b/2;
	}
	
	
	printf("Liczba bitow ustawionych na 1 dla znaku: %d",bit);
	
	
	return 0;
}
