#include <stdio.h>
#include <math.h>

#define pi 3.14

int main()
{
	
	double r,p,o;
	
	printf("Podaj promien kola:\n");
	scanf("%lf", &r); //wczytuje dlugosc promienia
	
	p = pi*pow(r,2); //oblicza pole trojkata
	o = 2*pi*r; //oblicza obwod trojkata
	
	printf("Pole kola to: %.2lf\n", p); //zwraca wyliczone pole trojkata
	printf("Obwod kola to: %.2lf", o); //zwraca wyliczony obwod trojkata
	
	return 0;
}
