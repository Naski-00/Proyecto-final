#include <stdio.h>
#include <stdlib.h>

// Funci�n principal
int main(int argc, char *argv[]) {
	float a,res;
	int op;
	char v;
	do{
	printf("elige 1.mts a cm  2.km a mts  3.cm a mts  4.mts a km  5.salir\n");
	scanf("%d",&op);
switch(op)
{
	case 1: printf("dime cuantos mts: \n");
	scanf("%f",&a);
		res=a*100;
		printf("el resultado es: %f\n",res);
		break;
		case 2: printf("dime cuantos km: \n");
	scanf("%f",&a);
		res=a*1000;
		printf("el resultado es: %f\n",res);
		break;
		case 3: printf("dime cuantos cm: \n");
	scanf("%f",&a);
		res=a/100;
		printf("el resultado es: %f\n",res);
		break;
		case 4: printf("dime cuantos mts: \n");
	scanf("%f",&a);
		res=a/1000;
		printf("el resultado es: %f\n",res);
		break;
		case 5:
		v = 'n';
		break;
	default: printf("valor invalido, \n");
	
}
	printf("quiere hacer otra operacion? y/n \n");
	scanf(" %c", &v);
}while(v == 'y');
    return 0;
}
