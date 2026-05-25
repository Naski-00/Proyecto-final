#include <stdio.h>
#include <stdlib.h>

int main(){
    int cal, can, pro, sum, i;

    printf("cuantas calificaciones qires promediar? ");
    scanf("%d", &can);

    sum = 0;

    for (i = can; i > 0; i--) {
        printf("dame una calificacion: \n");
        scanf("%d", &cal);
        sum = sum + cal;
        pro = sum / can;
    }

    printf("el promedio es: %d", pro);

    return 0;
}
