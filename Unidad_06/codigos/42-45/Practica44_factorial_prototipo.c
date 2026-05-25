#include <stdio.h>


long obtenerFactorial();

int main() {
    long resultado;

    resultado = obtenerFactorial();

    printf("El resultado recibido en el main es: %lu\n", resultado);

    return 0;
}

long obtenerFactorial() {
    int num, i;
    long factorial = 1;

    printf("___FACTORIAL DE UN NUMERO____\n\n");
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        factorial *= i;
    }

    return factorial;
}
