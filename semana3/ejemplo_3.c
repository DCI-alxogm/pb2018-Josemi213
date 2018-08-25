/*Este programa fue realizdo por Misael Rojas el 24 de Agosto del 2018*/

#include<stdio.h>

int main(){
	int a; /*Define la variable de nuestro programa*/
	printf("introduce un numero \n"); /*Indica la instrucción necesaria para nuestro programa*/
	scanf("%i",&a); /*Escanea la función introducida por el usuario para ejecutar el programa*/
	if(a%2==0) a = a + 1; /*Establece la condición de si a es similar a 2, osea par, se le suma 1*/
	//if(a%2==0){ /^Se establece la unica condición existente*/
	// instrucciones /*Se cierra la secuencua de instrucciones*/
	//}
	printf("%i \n", a);

return 0;
}
