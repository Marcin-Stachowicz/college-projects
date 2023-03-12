#include <stdio.h>

int main()
{
	
	float a,b,c,p,pole;
	
	printf("Podaj dlugosc boku A:\n");
	scanf("%f", &a); //wczytuje dlugosc pierwszego boku
	
	printf("Podaj dlugosc boku B:\n");
	scanf("%f", &b); //wczytuje dlugosc drugiego boku
	
	printf("Podaj dlugosc boku C:\n");
	scanf("%f", &c); //wczytuje dlugosc trzeciego boku
	
	p = (a+b+c)/2; //oblicznie polowy obwodu, potrzebne do wyliczenia pola
	pole = p*(p-a)*(p-b)*(p-c); //obliczenie pola
	
	if (pole <= 0) {
		
		printf("Trojkat o podanych bokach nie istnieje"); //jesli pole jest <= 0, trojkat nie istnieje
	} 
	else {
		printf("Pole trojkata jest rowne:" "%.3f", pole); //zwraca wyliczone pole trojkata
	}
	return 0;
}
