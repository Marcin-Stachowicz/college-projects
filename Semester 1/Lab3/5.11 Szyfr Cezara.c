#include <stdio.h>

#define alfabet 26

void szyfr(char c, int klucz, int op) {
	
	switch (op) {
		
		case 1:
			c = ((c - 'a' + klucz) % alfabet) + 'a';
		break;
		
		case 2:
			c = ((c - 'a' - klucz + alfabet) % alfabet) + 'a';
		break;
		default:
			
	printf("Nieprawidlowa operacja\n");
	return;
}

  printf(" znak: %c \n", c);
}

int main() {
	char c;
	int klucz;
	int op;

	printf("Podaj klucz dla szyfru (1-25): ");
	scanf("%d", &klucz);
	printf("Wcisnij 1 by szyfrowac, lub 2 by deszyfrowac: ");
	scanf("%d", &op);

	while (1) {
	
	c = getche();
	
		if (c == 27) {
			break;
    	}
    
    szyfr(c, klucz, op);
	}
  return 0;
}

