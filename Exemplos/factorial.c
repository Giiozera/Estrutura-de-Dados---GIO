#include <stdio.h> 

int fatorial (int n){

	int i, fat;
	fat = 1;
	for (i = 1;i <= n;i++)
	fat *= i; /*fat = fat * i; */
	printf("\nFatorial de %d = %d\n",n,fat);
	return 0;

}

int main (){
	int limite;
	
	printf("\n\nCalculo de fatorial\n");

	printf("\nQual fatorial? ");

	scanf("%d",&limite);
	fatorial(limite);
	printf("Tecle <ENTER> para finalizar\n");
	
	return 0;
}