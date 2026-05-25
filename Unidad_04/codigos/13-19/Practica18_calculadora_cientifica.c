#include <stdio.h>
#include <stdlib.h>   
#include <math.h>

int main(int argc, char *argv[]) {
	float a,b,res;
	int op;
	char v;
	do{
	printf("elige 1.potencia de x  2.raiz de x  3.seno de un angulo (grados)  4.coseno de un angulo (grados)  5.logaritmo de x  6.salir\n");
	scanf("%d",&op);
switch(op)
{
	case 1: printf("dame el valor de X y su potencia: \n");
		scanf("%f%f",&a,&b);
		res=pow(a,b);
		printf("el resultado es: %f\n",res);
		break;
	case 2: printf("dame X y el indice de la raiz: \n");
		scanf("%f%f",&a,&b);
		res=pow(a, 1/b);
		printf("el resultado es: %f\n",res);
		break;
	case 3: printf("dame los grados: \n");
		scanf("%f",&a);
		b=a*(3.14/180);
		res=sin(b);
		printf("el resultado es: %f\n",res);
		break;
	case 4: printf("dame los grados: \n");
		scanf("%f",&a);
		b=a*(3.14/180);
		res=cos(b);
		printf("el resultado es: %f\n",res);
		break;
	case 5: printf("dame X y la base del logaritmo: \n");
		scanf("%f%f",&a,&b);
		res=log(a)/log(b);
		printf("el resultado es: %f\n",res);
		break;
	case 6: 
		v = 'n';
		break;			
	default: printf("valor invalido, ");
}
printf("quiere hacer otra operacion? y/n \n");
	scanf(" %c", &v);
}while(v == 'y');
    return 0;
}
