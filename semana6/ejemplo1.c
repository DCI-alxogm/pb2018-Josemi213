/*Este programa fue realizado por Misael Rojas el 10 de Septiembre del 2018
en la clase de programación básica y consiste en un ejemplo de "arrays"*/

#include<stdio.h>

int main ()
{
	int i,n=10;
	float numeros(i);

	for (i=0;i<n;i++) {
		numeros[n]=0;
	}

	for (i=0;i<n;i++) {
		scanf("%f \n", &numeros[n]);
	}

	for (i=0;i<n;i++) {
		printf("%f \n", numeros[n]);
	}

	return 0;
}
