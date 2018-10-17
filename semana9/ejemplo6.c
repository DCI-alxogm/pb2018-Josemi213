#include <stdio.h>

float cuadrado(){
	float xx, x;
	printf("\n Introduce un número:");
	scanf("%f", &x);
	xx = x*x;
	return xx;
}

int main(){
	float r:

	r=cuadrado();
	printf("Su cuadrado es: %f \n", r);

	return 0;
}
