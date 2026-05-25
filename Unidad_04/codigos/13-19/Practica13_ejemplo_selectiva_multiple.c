#include <stdio.h>
#include <stdlib.h>   

// Función principal
int main(int argc, char *argv[]) {
	int op,a,b,res;
	printf("elige 1.suma  2.resta\n");
	scanf("%d",&op);
switch(op)
{
	case 1: printf("dame dos valores\n");
	scanf("%d%d",&a,&b);
		res=a+b;
		printf("el resultado es: %d\n",res);
		break;
		case 2: printf("dame dos valores\n");
	scanf("%d%d",&a,&b);
		res=a-b;
		printf("el resultado es: %d\n",res);
		break;	
	default: printf("valor invalido\n");	
}
    return 0;
}
