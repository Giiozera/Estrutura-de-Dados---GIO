#include <stdio.h>
#include <stdlib.h>


int mult (float a, float b,float c) {
	printf ("%f\n\n",a*b*c);
	return 0;
}
int main (){
	float x,y;
	x=23.5;
	y=12.9;
	mult (x,y,3.87);
	return 0;
}