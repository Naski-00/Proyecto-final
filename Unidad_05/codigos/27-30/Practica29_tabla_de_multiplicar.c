#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
     int a,b,r,i;
    printf("tabla del A hasta el B ");
    scanf("%d%d", &a,&b);
    
  	for(i=0;i<=b;i++){
  		r=a*i;
        printf("%d * %d = %d\n", a, i, r);
  	}
  
    return 0;
}
