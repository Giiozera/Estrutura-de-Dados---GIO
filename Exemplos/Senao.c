#include <stdio.h>
#include <stdlib.h>
//teste conexao itbam

	int idade;

int verIdade(){

if(idade >= 18){
	printf("Vocẽ é maior de idade!\n\n");
}else{
	printf("Vocẽ é menor de idade!\n\n");

}

}

void main(){

printf("Digite sua idade:");
scanf("%d", &idade);

verIdade();

}