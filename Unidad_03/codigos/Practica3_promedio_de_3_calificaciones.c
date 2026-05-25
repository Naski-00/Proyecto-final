#include <stdio.h>
#include <stdlib.h>   

// Función principal
int main(int argc, char *argv[]) {
	double c1,c2,c3,p;
	printf("dame tus 3 calificaciones\n");
	scanf("%lf%lf%lf", &c1, &c2, &c3);
	p=(c1+c2+c3)/3;
	printf("tu promedio es: %lf", p);
	
    return 0;
}


