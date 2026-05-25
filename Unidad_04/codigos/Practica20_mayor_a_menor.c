#include <stdio.h>
#include <stdlib.h>

// Funcion principal
int main(int argc, char *argv[]) {
    float a, b, c,t;

    printf("Dame 3 numeros\n");
    scanf("%f %f %f", &a, &b, &c);

    printf("De mayor a menor: ");

    if(a<b){   
        t=a;a=b;b=t;
        }

    if(a<c){
        t=a;a=c;c=t;
        }
    
    if(b<c){
        t=b;b=c;c=t;
        }

    printf("%f %f %f",a,b,c);

    return 0;
}
