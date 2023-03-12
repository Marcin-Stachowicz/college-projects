#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 100

int main( ) {
	
char napis[N];
int i; 
int ls = 0; 
int litcyfr; 
unsigned char c; 
int slowo = 0; 

printf("Podaj napis: ");
gets(napis);
printf("%s\n",napis);

	for(i=0;i<N;i++) {
		c = napis[i];
		litcyfr = isalpha(c) || isdigit(c);
		
			if(slowo && !litcyfr) {
  				slowo = 0;
 				ls++;
			}
			
					if(litcyfr && !slowo) {
  					slowo = 1;
					}
	}
	
printf("\nW tekscie jest slow: %d\n",ls-1);
return ls;
}
