#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char const *argv[])
{
    	int op,a,b,res;
	    printf("elige 1.suma  2.resta\n");
	    scanf("%d",&op);
    if (op==1)
    {
      printf("dame dos valores\n");
	    scanf("%d%d",&a,&b);
		res=a+b;
		printf("el resultado es: %d\n",res);
    } else if (op==2)
    {
        printf("dame dos valores\n");
	    scanf("%d%d",&a,&b);
		res=a-b;
		printf("el resultado es: %d\n",res);
    } else
    {
        printf("valor invalido\n");
    }
    
    
    return 0;
}
