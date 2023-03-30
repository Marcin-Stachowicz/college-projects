#include <stdio.h>

int main()
{

	int a,b,c,N,i;
	
	printf("Podaj ktora liczbe ciagu fibonacciego chcesz otrzymac:");
	scanf("%d", &N); //pobiera do ktorej liczby ciagu wyliczac
	
	a=0; //
	b=1; //podstawowe wartosci ciagu dla petli
	c=0; //
	
	printf("%d\n%d\n",a, b); //wypisuje dwie pierwsze liczby ciagu
	
	for(i = 0; i < N-2; i++) //petla wyliczajaca i zwracajaca kolejne wartosci ciagu
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n", c);
	}
	
	return 0;

}
