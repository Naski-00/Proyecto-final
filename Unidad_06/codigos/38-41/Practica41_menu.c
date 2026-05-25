#include <stdio.h>
#include <math.h>

int num1, num2;

double calcularRaiz() {
    printf("___RAIZ____\n\n");
    printf("Numero: ");
    scanf("%d", &num1);
    return sqrt(num1);
}

double calcularPotencia() {
    printf("___POTENCIA____\n\n");
    printf("Numero: ");
    scanf("%d", &num1);
    printf("Numero de potencia: ");
    scanf("%d", &num2);
    return pow(num1, num2);
}

double calcularLogaritmo() {
    float num3;
    printf("___LOGARITMO____\n\n");
    printf("Numero: ");
    scanf("%f", &num3);
    return log(num3);
}

double calcularCoseno() {
    float num3;
    printf("___COSENO____\n\n");
    printf("Numero: ");
    scanf("%f", &num3);
    return cos(num3);
}


int main() {
    int op;
    double resultado;
    printf(" 1) Raiz \n 2) Potencia \n 3) Logaritmo Natural \n 4) Coseno \n");
    printf("Seleccione una opcion: ");
    scanf("%d", &op);

    switch(op) {
        case 1:
            resultado = calcularRaiz();
            printf("El resultado de la raiz es: %.2f\n", resultado);
            break;
        case 2:
            resultado = calcularPotencia();
            printf("El resultado de la potencia es: %.2f\n", resultado);
            break;
        case 3:
            resultado = calcularLogaritmo();
            printf("El Logaritmo Natural es: %.4f\n", resultado);
            break;
        case 4:
            resultado = calcularCoseno();
            printf("El coseno es: %.4f\n", resultado);
            break;
        default:
            printf("Opcion no valida.\n");
            break;
    }

    return 0;
}
