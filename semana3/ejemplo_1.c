/*Creado por Misael Rojas el 24 de Agosto del 2018*/

#include <stdio.h>
#include <math.h> /*Esto incluye la liberia math.h, la cual nos va a dejar utilizar coordenadas y operaciones complejas para nuestros programas*/

int main()
{

	int opcion;/*Eso define una variable de opción, la cual nos servira para citar todas nuestras instrucciones*/
	
	printf(" Teclear una opción \n");
	printf("(1) para convertir temperaturas. \n");
	printf("(2) para convertir coordenadas. \n");

	scanf("%i",&opcion);/*Escanea la opción que que escojamos mediante la variable"%i".*/
	
	switch(opcion)/*Esta opción permite intercambiar entre las diferentes secuencias de acciones*/
	{
	case 1:/*Incluye una secuencia de opciones segun la secuencia que se escoja*/
		printf("Entre la opción 1 \n ") ;
		break;/*Termina la secuencia de acciones segun sea el caso*/
	case 2: 
		printf("Entre la opcion 2 \n") ;
		break;
	default:/*Determina si las opciones que se escogieron no son correctas*/
		printf("Opción invalida \n") ;
		break;
}
return 0;
}

