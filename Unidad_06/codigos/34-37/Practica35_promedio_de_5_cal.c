#include <stdio.h>

void calcularPromedio() {
    float nota, suma = 0, promedio;
    int i;

    printf("___PROMEDIO DE 5 CALIFICACIONES____\n\n");

    for(i = 1; i <= 5; i++) {
        printf("Ingrese la calificacion %d: ", i);
        scanf("%f", &nota);
        suma += nota;
    }

    promedio = suma / 5;
    printf("\nEl promedio final es: %.2f\n", promedio);
}

int main() {
    calcularPromedio();
    return 0;
}
