#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i;
    printf("dame un numero\n");
    scanf("%d",&i);
    switch (i % 2)
    {
    case 0:
        printf("el numero es par");
        break;
    
    default:
    printf("el numero es impar");
        break;
    }
    return 0;
}
