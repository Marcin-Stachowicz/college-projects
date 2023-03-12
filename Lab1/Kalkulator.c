#include <stdio.h>
int main() {

    int znak;
	double pierwsza, druga;

	
    printf("Podaj pierwsza liczbe: \n");
	scanf("%lf", &pierwsza); //wczytuje pierwsza liczbe
	printf("Podaj operator (+, -, *, /): \n");
	fflush(stdin);//czysci buffer stdin, aby poprawnie pobrac operator przy uzyciu funkcji getchar.
	znak = getchar(); //pobiera operator
	printf("Podaj druga liczbe: \n");
	scanf("%lf", &druga); //wczytuje druga liczbe



    switch (znak) {   //funkcja switch, ktora na podstawie wczesniej podanego przez uzytkownika operatora wybiera odpowiednie dzialanie i zwraca wynik

	case '+':
	printf("%.3lf + %.3lf = %.3lf", pierwsza, druga, pierwsza + druga);
	break;
	case '-':
	printf("%.3lf + %.3lf = %.3lf", pierwsza, druga, pierwsza - druga);
	break;
	case '*':
	printf("%.3lf + %.3lf = %.3lf", pierwsza, druga, pierwsza * druga);
	break;
	case '/':
	printf("%.3lf + %.3lf = %.3lf", pierwsza, druga, pierwsza / druga);
	break;
	
	default:
      printf("Bledny operator, dostepne operatory to (+, -, *, /)");
      
    }

    return 0;

}
