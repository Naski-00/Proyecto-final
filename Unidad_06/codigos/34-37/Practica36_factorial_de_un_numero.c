#include <stdio.h>

void calcularFactorial() {
    int num, i;
    long factorial = 1;

    printf("___FACTORIAL DE UN NUMERO____\n\n");
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("El factorial no existe para numeros negativos.\n");
    } else {
        for(i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es: %lu\n", num, factorial);
    }
}

int main() {
    calcularFactorial();
    return 0;
}
