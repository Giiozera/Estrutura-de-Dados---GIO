#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int numeros[TAM];
int condicao;
int maior;
int menor;



void preenche(){

	printf("Entre com %d valores para preencher o vetor\n",TAM);

	for (int i = 0; i < TAM; ++i){
		
		printf("%d valor:",i+1);
		scanf("%d",&numeros[i]);

	}


}

void mostrar(){

	printf("Digite 1 para mostrar ou qualquer outra tecla para sair\n");
	scanf("%d", &condicao);
	
		if(condicao == 1){
			for (int i = 0; i < TAM; ++i){
				printf("O %d valor eh: [%d]",i+1,numeros[i]);
			}
		}else{
			exit(0);
		

		}

}


void comparator(){

		maior = numeros[0];
		menor = numeros[0];

for (int i = 0; i < TAM; ++i){
	

	if(numeros[i]>= maior){
		maior = numeros[i];
		
	}
	if(numeros[i] <= menor){
		menor = numeros[i];
	}


}

printf("Maior valor eh: %d\nMenor valor eh: %d\n",maior,menor );


}


int main(){

preenche();

//mostrar();
comparator();


}


