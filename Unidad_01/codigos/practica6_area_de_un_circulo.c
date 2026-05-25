#include <stdio.h>
#include <stdlib.h>   
#include <math.h>
// Función principal
int main(int argc, char *argv[]) {
	double l,a;
	printf("dame el radio de tu circulo\n");
	scanf("%lf", &l);
	a=3.14*(l*l);
	printf("el area de tu circulo es: %lf", a);
	
    return 0;
}

