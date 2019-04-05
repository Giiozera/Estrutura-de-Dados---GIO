#include <stdio.h>
#include <stdlib.h>

int primeiro;
int segundo;
int parametro;

void entrada(){

	printf("Entre com dois numeros.\n");
	printf("Primeiro numero:");
	scanf("%d",&primeiro);
	printf("Segundo numero:");
	scanf("%d",&segundo);

}


int escolha(){

printf("Escolha uma das seguintes opcoes:\n1) Adicao entre os valores.\n2) Subtracao entre os valores.\n3) Multiplicacao entre os valores.\n4) Divisao entre os valores.\n");
scanf("%d", &parametro);

	if(parametro == 1){
		return primeiro+segundo;
	}else if(parametro == 2){
		return primeiro-segundo;
	}else if(parametro == 3){
		return primeiro*segundo;
	}else{
		return primeiro/segundo;
	}

}

int main(){

	entrada();

	printf("A operacao escolhida foi a %d e o resultado foi %d\n\n",parametro,escolha());


}