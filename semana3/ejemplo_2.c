/*Este programa fue realizado por Misael Rojas el 24 de Agosto del 2018*/

#include<stdio.h> /*Define las librerias necesarias para las instrucciones que vamos a darle al programa*/

int main(){
	int a;/*Define las variables necesarias para nuestro programa*/
	printf("introduce un numero \n");/*Da la instrucción*/
	scanf("%i",&a);/*Lee la instrucción que se introduce*/
	if(a%2==0){ /*Establece una condición necesaira para ejecutar una secuencia de instrucciones*/
	printf(" a=%i es par \n", a); /*Esta es la condicioón 1.*/
	}else{ /*Incluye otra secuencia de intrucciones segun las condiciones*/
	printf(" a=%i es impar \n", a); /*Esta es la condición 2.*/
}
return 0;
}
