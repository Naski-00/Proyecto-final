#include <stdio.h>


float calcularPromedio();

int main() {
    float resultado;

    resultado = calcularPromedio();

    printf("\nEl promedio devuelto al main es: %.2f\n", resultado);

    return 0;
}


float calcularPromedio() {
    float nota, suma = 0;
    int i;

    printf("___PROMEDIO DE 5 CALIFICACIONES____\n\n");
    for(i = 1; i <= 5; i++) {
        printf("Ingrese la calificacion %d: ", i);
        scanf("%f", &nota);
        suma += nota;
    }

    return suma / 5;
}
