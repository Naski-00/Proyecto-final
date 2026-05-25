#include <stdio.h>

    long obtenerFactorial() {
    int num, i;
    long fact = 1;

    printf("___FACTORIAL DE UN NUMERO____\n\n");
    printf("Ingrese numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    long resultado;

    resultado = obtenerFactorial();

    printf("El resultado recibido en el main es: %lu\n", resultado);

    return 0;
}
