#include <stdio.h>
#include <stdlib.h>
/*
1. Desenvolvaum algoritmo em C que em função informe ao usuário em tela as mensagens :
“VERDADEIRO”: Quandoo usuárioinformarnº positivo(exemplo: 1,2,3,4,5);
“FALSO”: Quandoo usuário informar nº negativo(ex.: -1,-2,-3 etc)
“VOCÊ PRECISA SELECIONAR UMA DAS OPÇÕES”: Quandoo usuárioinformar valor Nulo (0).
*/

int numero; //Obs. esta exatamente conforme o enunciado 

int main(){

	scanf("%d", &numero);

	while(numero <> 0){
		if(numero == 0){
			printf("VOCÊ PRECISA SELECIONAR UMA DAS OPÇÕES:");
		}else if(numero > 0){
			printf("VERDADEIRO");

		}else{
			printf("FALSO");

		}
	}
}
