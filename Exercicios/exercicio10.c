#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int primeiro;
int segundo;



void entrada(){

	printf("Entre com dois numeros.\n");
	printf("Primeiro numero:\n");
	scanf("%d",&primeiro);
	printf("Segundo numero:\n");
	scanf("%d",&segundo);
	printf("\n\n");

}


void operacoes(){


	if(primeiro > 0){
		printf("1) Quadrado de %d eh %d\n", primeiro,primeiro*primeiro);
	}
	if(segundo >= 10 && segundo <= 100){
		printf("2) Número está entre 10 e 100 – intervalo permitido\n");
	}else{
		printf("2) Número fora do intervalo permitido\n");
	}

	if(segundo < primeiro){
		printf("3) A diferenca entre os numeros eh: %d\n",primeiro-segundo);
	}else{
		printf("%d",primeiro+1);
	}

}


int main(){

	entrada();

	operacoes();


}