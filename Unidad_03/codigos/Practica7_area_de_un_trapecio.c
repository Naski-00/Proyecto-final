#include <stdio.h>
#include <stdlib.h>   
#include <math.h>
// Función principal
int main(int argc, char *argv[]) {
	double bc,bg,al,a;
	printf("dame la base mayor, la base menor, y la altura de tu trapecio\n");
	scanf("%lf%lf%lf", &bc, &bg, &al);
	a=((bc+bg)*al)/2;
	printf("el area de tu trapecio es: %lf", a);
	
    return 0;
}

