#include <stdio.h>
#include <math.h>

int main()
{
	
	double y;
	
	y=(pow(sin(0.45),2)/2+2*tan(sqrt(2)))/(log10(14)+2*exp(4)); //obliczenie funkcji
	printf("%lf", y); //wypisanie wyniku
	
	return 0;
}
