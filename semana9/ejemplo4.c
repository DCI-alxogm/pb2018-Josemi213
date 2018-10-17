#include <stdio.h>

void cuadrado(float x){
	float xx;
	xx = x*x;
	printf("Su cuadrado es %f \n", xx);
}

int main(){

	float x;
	printf("\n Introduce un número: \n");
	scanf("%f", &x);

	cuadrado(x);
}