#include <stdio.h>
#include <stdlib.h>   
#include <math.h>
// Función principal
int main(int argc, char *argv[]) {
	double l,l2,a;
	printf("dame la base y un lado de tu rectangulo\n");
	scanf("%lf%lf", &l, &l2);
	a=l*l2;
	printf("el area de tu rectangulo es: %lf", a);
	
    return 0;
}

