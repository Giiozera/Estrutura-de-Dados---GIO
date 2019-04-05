#include <stdio.h>
#include <stdlib.h>

/*

*/

int positivo;
int negativo;
int resultado;

void recebendoValores(){
	
	scanf("%d", &positivo);

	if(positivo <= 0){
		while(positivo <= 0){
			printf("O primeiro numero eh positivo .\n\nPositivo:\n");
		
			scanf("%d", &positivo);	
		}
	}else{
		printf("Agora o negativo:\n");
		scanf("%d", &negativo);
		if(negativo >=0){
			while(negativo >= 0){
			printf("Este numero tem que ser negativo.\n\nNegativo:\n");
			
			scanf("%d", &negativo);	
		}
		}
	}
}

int dobro(int primeiro, int segundo){

	printf("..::| PRIMEIRA MSG |::..\n\n");
	printf("O drobro de %d eh %d\n\nE o dobro de %d eh %d\n\n",primeiro,primeiro*2,segundo,segundo*2);
	printf("#\n\n");
	

}
int multiplicacao(int primeiro, int segundo){

return primeiro*segundo;

}

void checar(int resposta){
	printf("..::| TERCEIRA MSG |::..#\n\n");
	if(resposta > 1){
		printf("O resultado do produto eh positivo");
	}else{
		printf("O resultado do produto eh negativo\n");
		
	}
	printf("\n\n");
	
}

int main(){
	
	printf("Entre com dois numeros o primeiro positivo e o segundo negativo.\n\nPositivo:\n");
	recebendoValores();
	dobro(positivo,negativo);
	
	printf("..::| SEGUNDA MSG |::..\n\n");
	resultado = multiplicacao(positivo,negativo);
	printf("O produto entre os valores eh: %d\n",resultado);
	printf("\n\n");
	
	checar(resultado);
	
	

}
