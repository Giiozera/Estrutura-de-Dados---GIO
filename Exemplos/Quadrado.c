#include <stdio.h>

int square (int numero){

	printf ("O quadrado de %d eh %d\n",numero,(numero*numero));
	return 0;
}
int main (){

	int numero;

	printf ("Entre com um numero: ");
	scanf ("%d",&numero);
	printf ("\n");
	square(numero);
	return 0;

}