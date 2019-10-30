#include <stdio.h>
#include <time.h>
#include<stdlib.h>

void insertionSortC(int array[], int tamanho) {
      int i, j, tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] > array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}

int main(int argc, char** argv)
{
	srand((unsigned)time(NULL));	
   int array[100], tamanho, ordem;
   printf("Entre com o o numero de termos: ");
   scanf("%d", &tamanho);
   
   
   for(int i = 0; i < tamanho;i++){
   	array[i]=rand()%99+1;
      //printf("\nDigite o %dº número: ",i+1);
     // scanf("%d",&array[i]);
   }
 

      insertionSortC(array,tamanho);
      printf("\nArray em ordem crescente: ");
      for(int i=0; i<tamanho; i++){
      printf("\n%d", array[i]);
   }
      
    
   return 0;
}
