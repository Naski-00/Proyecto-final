#include <stdio.h>

float calcularPromedio() {
    float nota, suma = 0;
    int i;

    printf("___PROMEDIO DE 5 CALIFICACIONES____\n\n");
    for(i = 1; i <= 5; i++) {
        printf("Ingrese calificacion: ");
        scanf("%f", &nota);
        suma += nota;
    }

    return suma / 5;
}

int main() {
    float resultado;
    resultado = calcularPromedio();

    printf("\nEl promedio devuelto al main es: %.2f\n", resultado);

    return 0;
}
