#include <stdio.h>
#include <stdlib.h>

int linhas;
int colunas;
int dados;

void entrada(){
	
	printf("Informe o numero de linhas: \n");
	scanf("%d", &linhas);
	printf("Informe o numero de colunas: \n");
	scanf("%d", &colunas);
	
}

void geraMatriz(){
	
int matriz[linhas][colunas];
for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			printf("Informe o valor para %d%d\n",i,j);
			scanf("%d",&dados);
			matriz[i][j] = dados;
		}
	}
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			printf(" %d ",matriz[i][j]);
		
		}
		printf("\n");
	}
	
}

int main(){


entrada();

geraMatriz();

	
}

