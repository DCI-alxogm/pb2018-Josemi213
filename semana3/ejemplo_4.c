/*Este programa fue realizado por Misael Rojas el 24 de Agosto del 2018*/

#include<stdio.h>

int main()
{
	int numero1, numero2; /*Deifnimos las dos variables necesarias para el programa*/
	printf("Introduzca dos numeros enteros: "); /*Imprime la instrucción en la pantalla*/
	scanf("%i %i", &numero1, &numero2); /*Lee los numeros introducidos por el usuario, dos numeros*/

	if(numero1==numero2) /*Establece una igualdad entre los dos numeros introducidos*/
	{
		printf("Resultado: %d = %d", numero1, numero2); /*Establece la relación ny resultado de las vairiables numero 1 y numero 2*/
	}

	else if (numero1> numero2) /*Esta es la segunda condición del programa, que indica que el numero1 es mayor a 2*/
	{
		printf("Resultad: %d > %d", numero1, numero2); /*Da la igualdad de si el numero1 es mayor al numero 2*/
	}

	else
	{
		printf("Resultado: %d < %d", numero1, numero2);
	}

	return 0;
}
