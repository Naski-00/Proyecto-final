#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n,t,r;
    printf("Dame el numero del que quieres factorial:");
    scanf("%d",&n);

    t=n;

    printf("%d! = ",n);

    do{
        r=t*(n-1);
        t=r;
        printf("%d * ", n);
        n--;

    }while(n>1);

    printf("1 = %d",r);
    return 0;
}
