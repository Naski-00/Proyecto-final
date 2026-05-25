#include <stdio.h>
#include <stdlib.h>   

// Funcion principal
int main(int argc, char *argv[]) {
	int edad;
	printf("dame tu edad\n");
	scanf("%d",&edad);
	if(edad<18){
		printf("eres menor de edad y no puedes votar xd\n");
	}
    else{
    	printf("eres mayor de edad y puedes votar owo\n");
    }
	printf("que tengas un buen dia -w-");
    return 0;
}

