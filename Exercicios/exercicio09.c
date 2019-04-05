#include <stdio.h>



char nome;
long titulo;
int idade;


void entradaDados(){

	printf("\n");
	printf("*                                                    *\n");
	printf("*                   CADASTRO                         *\n");
	printf("*                                                    *\n");
	printf("\n");
	printf("Favor informar seu nome:\n");
	scanf("%s", &nome);
	printf("Favor informar seu titulo:\n");
	scanf("%ld",&titulo);
	printf("Favor informar sua idade:\n");
	scanf("%d",&idade);


}


void checaDados(){


	if(idade <= 16 || idade > 70){
		printf("Voto é facultativo!\n");
	}else{
		printf("Voto é obrigatorio!\n");
	}


}

int main(){


entradaDados();

checaDados();

}