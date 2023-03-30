#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define MAXLEN 30

typedef struct {
    char imie[MAXLEN];
    char nazwisko[MAXLEN];
    int pesel;
} osoba_t;

int indeks[MAX];
osoba_t tab[MAX];
int lelem = 0;
int koniec = 0;

int wczytaj_osobe(osoba_t *osoba) {
    printf("Wprowadz imie: ");
    scanf("%s", osoba->imie);
    printf("Wprowadz nazwisko: ");
    scanf("%s", osoba->nazwisko);
    printf("Wprowadz pesel: ");
    scanf("%d", &osoba->pesel);
    return 0;
}

int dodaj_osobe(osoba_t *osoba) {
    if (lelem < MAX) {
        tab[koniec] = *osoba;
        indeks[koniec] = osoba->pesel;
        lelem++;
        koniec++;
        return 0;
    }
    else {
        printf("Osiagnieto maksymalna liczbe elementow w tablicy!\n");
        return -1;
    }
}

int szukaj_osobe(int pesel, osoba_t *osoba) {
	int i;
    for (i = 0; i < lelem; i++) {
        if (indeks[i] == pesel) {
            *osoba = tab[i];
            return i;
        }
    }
    printf("Nie znaleziono osoby o podanym peselu\n");
    return -1;
}

void wyswietl_osobe(osoba_t *osoba) {
    printf("Imie: %s, Nazwisko: %s, Pesel: %d\n", osoba->imie, osoba->nazwisko, osoba->pesel);
}

void wyswietl_liste(osoba_t tab[], int ile) {
	int i;
    for (i = 0; i < ile; i++) {
        wyswietl_osobe(&tab[i]);
    }
}

int usun_osobe(int pesel) {
	int i;
    int pozycja = -1;
    for (i = 0; i < lelem; i++) {
        if (indeks[i] == pesel) {
            pozycja = i;
            break;
        }
    }
    if (pozycja == -1) {
        printf("Nie znaleziono osoby o podanym peselu\n");
        return -1;
    }
    else {
        for (i = pozycja; i < lelem - 1; i++) {
            tab[i] = tab[i + 1];
indeks[i] = indeks[i + 1];
}
lelem--;
koniec--;
return 0;
}
}

int menu(void) {
printf("1 - Dodaj osobe, 2 - Wyswietl liste osob, 3 - Szukaj osoby, 4 - Usun osobe, 5 - Wczytaj Plik, 6 - Zapisz Plik, 7 - Koniec\n");
return 0;
}

int zapisz() {
	FILE *plik;
	plik = fopen("baza.dat", "wb");
	printf("Zapisano do pliku baza.dat\n");
		if (plik == NULL) {
			printf("Blad otwarcia pliku!\n");
			return -1;
		}
	fwrite(tab, sizeof(osoba_t), MAX, plik);
	fclose(plik);
	return 0;
}

int odczyt() {
FILE *plik;
plik = fopen("baza.dat", "rb");
printf("Wczytano plik baza.dat\n");
if (plik == NULL) {
printf("Blad otwarcia pliku!\n");
return -1;
}
fread(tab, sizeof(osoba_t), MAX, plik);
fclose(plik);
return 0;
}

int main() {
	koniec = 0;
	lelem = 0;
	int pesel;
	int wybor;
	osoba_t osoba;
	printf("Baza danych osob\n");
		do {
			menu();
			wybor = getchar();
			switch(wybor) {
				
				case '1' :
					wczytaj_osobe(&osoba);
					dodaj_osobe(&osoba);
					break;
					
				case '2' : 
					wyswietl_liste(tab, lelem);
					break;
				
				case '3' : 
					printf("Szukaj - podaj pesel: ");
					scanf("%d", &pesel);
					szukaj_osobe(pesel, &osoba);
					wyswietl_osobe(&osoba);
					break;
					
				case '4' : 
					printf("Usun - podaj pesel: ");
					scanf("%d", &pesel);
					usun_osobe(pesel);
					break;
					
				case '5' : 
					odczyt();
					break;
				
				case '6' : 
					zapisz();
					break;
							
				case '7' : 
					printf("Koniec\n");
					return 0;
			}
		} while(1);
		
	printf("Koniec\n");
	return 0;
}
