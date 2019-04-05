#include <stdio.h>


int main(){

int troca (int *a, int *b){
int x;
if (*a>*b)
{
x = *a;
*a=*b;
*b=x;
}
return 0;
}


}