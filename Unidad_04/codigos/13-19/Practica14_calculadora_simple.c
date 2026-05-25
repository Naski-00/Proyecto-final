#include <stdio.h>
#include <stdlib.h>

// Funci�n principal
int main(int argc, char *argv[]) {
	float a,b,res;
	int op;
	char v;
	do{
	printf("elige 1.suma  2.resta  3.multiplicacion  4.division  5.salir\n");
	scanf("%d",&op);
switch(op)
{
	case 1: printf("dame dos valores\n");
	scanf("%f%f",&a,&b);
		res=a+b;
		printf("el resultado es: %f\n",res);
		break;
		case 2: printf("dame dos valores\n");
	scanf("%f%f",&a,&b);
		res=a-b;
		printf("el resultado es: %f\n",res);
		break;
		case 3: printf("dame dos valores\n");
	scanf("%f%f",&a,&b);
		res=a*b;
		printf("el resultado es: %f\n",res);
		break;
		case 4: printf("dame dos valores\n");
	scanf("%f%f",&a,&b);
		res=a/b;
		printf("el resultado es: %f\n",res);
		break;
		case 5:
		v = 'n';
		break;
	default: printf("valor invalido, ");
	
}
printf("quiere hacer otra operacion? y/n \n");
	scanf(" %c", &v);
}while(v == 'y');
    return 0;
}
