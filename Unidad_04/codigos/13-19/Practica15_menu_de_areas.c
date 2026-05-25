#include <stdio.h>
#include <stdlib.h>

// Funci�n principal
int main(int argc, char *argv[]) {
	float a,b,res,h;
	int op;
	char v;
	v='y';
	do{
	printf("elige 1.area de cuadrado  2.area de circulo  3.area de rectangulo  4.area de trapecio  5.salir\n");
	scanf("%d",&op);
switch(op)
{
	case 1: printf("dame un lado\n");
	scanf("%f",&a);
		res=a*a;
		printf("el resultado es: %f\n",res);
		break;
		case 2: printf("dame el radio\n");
	scanf("%f",&a);
		res=3.14*a*a;
		printf("el resultado es: %f\n",res);
		break;
		case 3: printf("dame largo y ancho\n");
	scanf("%f%f",&a,&b);
		res=a*b;
		printf("el resultado es: %f\n",res);
		break;
		case 4:printf("dame base menor, base mayor, y altura en el mismo orden solicitado\n");
		scanf("%f%f%f",&a,&b,&h);
		res=((a+b)*h)/2;
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
