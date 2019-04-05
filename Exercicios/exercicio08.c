#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int primeiro;
int segundo;
int soma;


void entrada(){

	printf("Entre com dois numeros.\n");
	printf("Primeiro numero:");
	scanf("%d",&primeiro);
	printf("Segundo numero:");
	scanf("%d",&segundo);

}


void operacoes(){


printf("O dobro destes numeros sao %d e %d\n",primeiro*2,segundo*2);
printf("O Quadrado destes numeros sao %d e %d\n",primeiro*primeiro,segundo*segundo);
printf("A divisao entre esses numeros eh %d\n",primeiro/segundo);
printf("O resto da divisao entre esses numeros eh %d\n",primeiro%segundo);

soma = primeiro+segundo;

if(soma > 0){
	printf("O resultado da soma dos numeros eh positivo\n");
}else if(soma < 0){
	printf("O resultado da soma dos numeros eh negativo\n");
}else{
	printf("O resultado da soma dos numeros eh zero\n");
}


}


int main(){

	entrada();

	operacoes();


}