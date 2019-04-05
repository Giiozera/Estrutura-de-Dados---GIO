#include <stdio.h>
#include <stdlib.h>
#define PARAMETRO 3600

	int numero;
	int hora;
	int minutos;
	int segundos;

void geraTimer(int numero){

	hora = numero / PARAMETRO;
	minutos = (hora % PARAMETRO);
	segundos = (numero % 60);
	
	printf("Hora:%d:%d:%d\n", hora,minutos,segundos); 


}

int main(){



	printf("Entre com um valor de segundos:\n");
	scanf("%d", &numero);
	geraTimer(numero);
	return 0;
 }
