#include <stdio.h>

int main(){

//tablas de multiplicar del 1 al 10 con while

int i = 1, j;

while(i <= 10){

    printf("tabla de multiplicar del %d \n", i);

    j = 1;
    while(j <= 10){
            printf("%d x %d = %d \n", i , j, i*j);
            j++;
    }
    i++;
}

return 0;
}
