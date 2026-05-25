#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float i;
    printf("dame un numero\n");
    scanf("%f",&i);
    if(i<0){
        printf("el numero es negativo\n"); 
    } else if (i==0)
    {
          printf("el numero es cero\n"); 
    }else{
          printf("el numero es positivo\n"); 
    }
    
    return 0;
}
