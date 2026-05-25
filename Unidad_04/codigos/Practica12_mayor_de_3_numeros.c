#include <stdio.h>
#include <stdlib.h>   

// Funcion principal
int main(int argc, char *argv[]) {
	float a, b, c, mayor;

    printf("Dame 3 numeros\n");
    scanf("%f %f %f", &a, &b, &c);

    mayor = a;   
    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }
    printf("El mayor es: %.2f\n", mayor);

    return 0;
}

