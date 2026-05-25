#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
        int b,p,a=1,c,i=1;
        printf("dame la base y potencia \n");
        scanf("%d%d", &b,&p);

    while (i <= p){ 
        c=a*b;
        a=c;
        i++;
    }  

 printf("Resultado: %d", a);


    return 0;
}
