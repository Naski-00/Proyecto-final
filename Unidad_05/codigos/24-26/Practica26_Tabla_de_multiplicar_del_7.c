#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
     int i,n,r;
    printf("tabla del 7 hasta el: ");
    scanf("%d", &n);
    i=0;
    do{
        r=7*i;
        printf("7 * %d = %d\n", i, r);
        i++;
    }while (i<=n);
 
    
    return 0;
}
