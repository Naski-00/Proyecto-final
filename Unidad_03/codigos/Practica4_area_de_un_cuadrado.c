#include <stdio.h>
#include <stdlib.h>   
#include <math.h>
// Función principal
int main(int argc, char *argv[]) {
	double l,a;
	printf("dame el lado de un cuadrado\n");
	scanf("%lf", &l);
	a=pow(l,2);
	printf("el area de tu cuadrado es: %lf", a);
	
    return 0;
}

