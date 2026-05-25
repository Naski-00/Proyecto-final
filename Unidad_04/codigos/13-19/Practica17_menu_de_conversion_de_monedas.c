#include <stdio.h>
#include <stdlib.h>

// Funci�n principal
int main(int argc, char *argv[]) {
	float a,res;
	int op;
	char v;
	v='y';
	do{
	printf("elige 1.dolar a pesos  2.dolar a euro  3.pesos a dolar  4.pesos a euros  5.euros a pesos  6.salir\n");
	scanf("%d",&op);
switch(op)
{
        case 1: printf("dolar a peso, ingrese cantidad: \n");
            scanf("%f",&a);
            res=a*20;
            printf("el resultado es: %f\n",res);
            break;
		case 2: printf("dolar a euro, ingrese cantidad: \n");
            scanf("%f",&a);
            res=a*0.85;
            printf("el resultado es: %f\n",res);
            break;
		case 3: printf("pesos a dolar, ingrese cantidad: \n");
            scanf("%f",&a);
            res=a/20;
            printf("el resultado es: %f\n",res);
            break;
		case 4: printf("pesos a euros, ingrese cantidad :\n");
            scanf("%f",&a);
            res=a/20.5;
            printf("el resultado es: %f\n",res);
            break;
		case 5: printf("euros a pesos, ingrese cantidad: \n");
            scanf("%f",&a);
            res=a*20.5;
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
