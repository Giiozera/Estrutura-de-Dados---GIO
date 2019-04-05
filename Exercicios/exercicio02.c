#include <stdio.h>

int primeiroNumero;
int segundoNumero;

void operacao(int numero1, int numero2){

	printf(" %d * %d\n", numero1,numero2);
	printf("%d  -  %d\n", numero1,numero2);

	do{

		primeiroNumero = numero1 / 2;
		numero1 = primeiroNumero;
		printf("%d  -  ", primeiroNumero);

		segundoNumero = numero2 * 2; 
		numero2 = segundoNumero;
		printf("%d\n", segundoNumero);

	}while(numero1 > 1);



}

int main(){
	
	int numero1;
	int numero2;

	printf("Entre com os numeros para efetuar as operacoes.\n");

	printf("Primeiro numero:\n");
	scanf("%d", &numero1);

	printf("Segundo numero:\n");
	scanf("%d", &numero2);

	operacao(numero1,numero2);

	return 0;
}