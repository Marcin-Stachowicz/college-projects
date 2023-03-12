#include <stdio.h>
#include <ctype.h>

int main() {
	
	char c;
	int male=0,duze=0,cyfry=0,spacje=0,znaki=0;
	
	while ((c = getchar()) != EOF) {
		
		printf("%c",c);
		
		if(islower(c)) {
			male++;
		}
		
		
		if(isupper(c)) {
			duze++;
		}
		
		
		if(isdigit(c)) {
			cyfry++;
		}
		
		
		if(isspace(c)) {
			spacje++;
		}
		
		
		if(iscntrl(c)) {
			znaki++;
		}
	}
	
	
	printf("Male litery: %d\n",male);
	printf("Duze litery: %d\n",duze);
	printf("Cyfry: %d\n",cyfry);
	printf("Spacje: %d\n",spacje);
	printf("Znaki kontrolne: %d\n",znaki);
	
	
	return 0;
}
