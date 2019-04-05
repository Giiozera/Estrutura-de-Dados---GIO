
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	
	


	double valor;
	double total;
	int quantidade;
	double juros;

 void lerDados(){


	printf("Qual o valor a ser emprestado?\n");
	scanf("%lf", &valor);

	printf("Informe o numero de parcelas:\n");
	scanf("%d", &quantidade);
	

}

void regraJuros(){

	if(quantidade <= 3 || valor <= 750){
		juros = 0.02;
		printf("Foi aplicado 2 porcento de Juros para este emprestimo:\n\n");
	}else if(quantidade <=6 || valor <= 1500){
		juros = 0.03;
		printf("Foi aplicado 3 porcento de Juros para este emprestimo:\n\n");
	}else{
		juros = 0.077;
		printf("Foi aplicado 7.7 porcento de Juros para este emprestimo:\n\n");
	}

}

void calculaParcelas(){

	regraJuros();

for (int i = 0; i < quantidade; ++i){
	
	total = (valor *juros)+total;
	printf("Total juros mes %d, R$ %.2f\n", i+1,total);
}

printf("\nTotal a ser pago em %d meses: R$%.2f\n", quantidade,total+valor);
}

int main(){


	lerDados();

	calculaParcelas();

return 0;

}