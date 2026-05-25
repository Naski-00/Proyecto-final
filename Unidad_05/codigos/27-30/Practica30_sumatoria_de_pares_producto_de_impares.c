#include <stdio.h>
#include <stdlib.h>

int main(){
    int par, can, imp, num, i;

    printf("Dame la cantidad de numeros ");
    scanf("%d", &can);

    par = 0;
    imp = 1;

    for(i = can; i > 0; i--){
        printf("dame el primer numero \n");
        scanf("%d", &num);

        if (num % 2 == 0){
            par = par + num;
        } else {
            imp = imp * num;
        }
    }

    if (imp == 1){
        imp = 0;
    }

    printf("sumatoria de pares: %d\n", par);
    printf("producto de impares: %d\n", imp);

    return 0;
}
