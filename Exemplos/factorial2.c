#include <stdio.h>

int fatorial (int n){

	int i, fat; //declarando inteiros para calculo

	fat=1; // atribuindo valor 1 ao inteiro fat

	for (i = 1;i <= n;i++){ 
		fat *= i; 
	}
	return(fat);

}

int main (){

	int limite;

	printf("\n*****************************\n");
	printf("*    Calculo de fatorial    *\n");
	printf("*****************************\n\n");

	printf("\nQual fatorial quer calcular? \n\n");

	scanf("%d",&limite);

	printf("\nFatorial de %d = %d\n",limite, fatorial(limite));

	printf("Tecle <ENTER> para finalizar");

	return 0;
}