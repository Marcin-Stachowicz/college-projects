#include <stdio.h>
#include <conio.h>
#include <string.h>

const int M=4; 
const int N=12; 

void pisz_tab(char tab[][N],int row);
void sortuj(char[][N],int row);

int main() {
	char t[4][12]={"Tomek","Jarek","Zbyszek","Agata"};
	
	puts("Tablica przed sortowaniem:\n");
	pisz_tab(t,M);
	sortuj(t,4);
	
	puts("\n\nTablica po sortowaniu:\n");
	pisz_tab(t,M);
	getch();
	
	return 0;
}

void pisz_tab(char tab[][N],int row) {
	
	int j,k;
		for (j=0;j<row;j++) {
			printf("%s \n",tab[j]);
		}
}

void sortuj(char tab[][N], int size) {
	
	int i, j;
	char temp[N];

		for (i = 0; i < size-1; i++) {
			
   			for (j = 0; j < size-i-1; j++) {
   				
        		if (strcmp(tab[j], tab[j+1]) > 0) {
            		strcpy(temp, tab[j]);
            		strcpy(tab[j], tab[j+1]);
            		strcpy(tab[j+1], temp);
        		}
    		}
		}
}
