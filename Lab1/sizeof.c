#include<stdio.h>

int main() 
{
	//deklaracja typow zmiennych
	char TYPchar;
    int TYPint;
    float TYPfloat;
    double TYPdouble;
    
    //wypisanie rozmiaru poszczegolnych typow zmiennych
	printf("Typ char zajmuje %zu bajtow\n", sizeof(TYPchar));
    printf("Typ int zajmuje %zu bajtow\n", sizeof(TYPint));
    printf("Typ float zajmuje %zu bajtow\n", sizeof(TYPfloat));
    printf("Typ double zajmuje %zu bajtow\n", sizeof(TYPdouble));
    
    return 0;
    
}
