#include <stdio.h>
#include <math.h>

int num1, num2;

void raiz();
void potencia();
void logaritmo();
void coseno();

int main() {
    int op;

    printf(" 1) Raiz \n 2) Potencia \n 3) Logaritmo Natural \n 4) Coseno \n");
    printf("Seleccione una opcion: ");
    scanf("%d", &op);

    switch(op) {
        case 1:
            raiz();
            break;
        case 2:
            potencia();
            break;
        case 3:
            logaritmo();
            break;
        case 4:
            coseno();
            break;
        default:
            printf("Opcion no valida.\n");
            break;
    }

    return 0;
}


void raiz() {
    double calc;
    printf("___RAIZ____\n \n");
    printf("Numero: ");
    scanf("%d", &num1);

    calc = sqrt(num1);
    printf("La raiz es %.2f\n", calc);
}

void potencia() {
    double calc;
    printf("___POTENCIA____\n \n");
    printf("Numero: ");
    scanf("%d", &num1);
    printf("Numero de potencia: ");
    scanf("%d", &num2);

    calc = pow(num1, num2);
    printf("La potencia es de %.2f\n", calc);
}

void logaritmo() {
    float calc;
    float num3;
    printf("___LOGARITMO____\n \n");
    printf("Numero: ");
    scanf("%f", &num3);

    calc = log(num3);
    printf("El logartimo Natural es %f\n", calc);
}

void coseno() {
    float calc;
    float num3;
    printf("___COSENO____\n \n");
    printf("Numero: ");
    scanf("%f", &num3);

    calc = cos(num3);
    printf("El coseno es %f\n", calc);
}
