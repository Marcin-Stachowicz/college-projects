#include <stdio.h>

int main() {
	
	int liczba,i,r; // Deklaracja zmiennych
	int wynik[32];	// i tablicy wynikowej
	printf ("Podaj liczbe dziesietna: \n");
	scanf ("%d", &liczba); // Pobranie liczby w postaci dziesietnej
	

int konwert2bin(int liczba, int i, int r) { //Funkcja konwertujaca pobrana wczesniej liczbe dziesietna na system binarny
		
	while(liczba > 0) { //Petla wykonujaca zamiane liczby. Wpisuje kolejne cyfry do tablicy.
		
		wynik[i++]=liczba%2;
		liczba=liczba/2;
		r++; //Zlicza ilosc powtorzen petli
	}
	printf("Liczba po przeksztalceniu na system binarny: \n");
		for (i = r-2; i >= 0; i--) //Petla wypisujaca wartosci tablicy w odwrotnej kolejnosci, w celu poprawnego przedstawienia liczby po konwersji.
		{
  			printf("%d", wynik[i]);
		}
}

int konwert2oct(int liczba, int i, int r) { //Funkcja konwertujaca pobrana wczesniej liczbe dziesietna na system osemkowy
		
	while(liczba > 0) { //Petla wykonujaca zamiane liczby. Wpisuje kolejne cyfry do tablicy.
		
		wynik[i++]=liczba%8;
		liczba=liczba/8;
		r++; //Zlicza ilosc powtorzen petli
	}
	
	printf("Liczba po przeksztalceniu na system osemkowy: \n");
		for (i = r-2; i >= 0; i--) //Petla wypisujaca wartosci tablicy w odwrotnej kolejnosci, w celu poprawnego przedstawienia liczby po konwersji.
		{
  			printf("%d", wynik[i]);
		}
}

int konwert2hex(int liczba, int i, int r) { //Funkcja konwertujaca pobrana wczesniej liczbe dziesietna na system szesnastkowy
		
	int znak;
	
	while(liczba>0) { //Petla wykonujaca zamiane liczby. Wpisuje kolejne znaki do tablicy.
		
		znak = liczba % 16;
		
		if(znak < 10) { //Funkcja IF okreslajaca wartosc znaku.
		    znak = znak+48; 
		}
		else {
			znak = znak+55;
		}
		wynik[i++]= znak; //Przypisanie wartosci znaku do tablicy
		liczba = (liczba-liczba%16)/16;
		r++; //Zlicza ilosc powtorzen petli
	}
	printf("Liczba po przeksztalceniu na system szesnastkowy: \n");
	printf("0x");
	for (i = r-2; i >= 0; i--) //Petla wypisujaca znaki z wartosci tablicy w odwrotnej kolejnosci, w celu poprawnego przedstawienia liczby po konwersji.
	      printf("%c",wynik[i]);
}

konwert2bin(liczba,i,r); // Wywo³anie funkcji konwersji binarnej
printf("\n");
konwert2oct(liczba,i,r); // Wywo³anie funkcji konwersji osemkowej
printf("\n");
konwert2hex(liczba,i,r); // Wywo³anie funkcji konwersji szesnastkowej

	return 0;
	
}

