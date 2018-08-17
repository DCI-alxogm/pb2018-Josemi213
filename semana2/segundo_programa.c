/*Este programa fue realizado por Misael Rojas el 16 de agosto del 2018*/

#include<stdio.h>
#include<float.h>

int main() 
{
	int edad, numero_favorito, año_actual, año_nacimiento, resultado;

	printf("Hola invitado \n");
	printf("Este es el segundo programa del curso \n");
	
	printf("Introduce tu edad: \n");
	scanf("%d",&edad);
	printf("Tu edad es: %d \n", edad);
	
	printf("Introduce tu numero favorito: \n");
	scanf("%d",&numero_favorito);
	printf("Tu numero favorito es: %d \n", numero_favorito);
	
	printf("Introduce el año actual: \n");
	scanf("%d",&año_actual);
	printf("El año presente es: %d \n", año_actual);
	
	printf("Introduce tu año de nacimiento: \n");
	scanf("%d",&año_nacimiento);
	printf("Tu año de nacimiento es %d \n", año_nacimiento);

	resultado = (edad + numero_favorito) * año_actual / año_nacimiento;
	printf("El resultado de esta operacion es %d \n", resultado);

	resultado = ((edad + numero_favorito) * año_actual) / año_nacimiento;
	printf("El resultado de esta operación es %d \n", resultado);

	resultado = (edad + numero_favorito) * año_actual / año_nacimiento;
        printf("El resultado de esta operacion es %d \n", resultado);

	resultado = edad + (numero_favorito * año_actual) / año_nacimiento;
	printf("El resultado de esta operación es %d \n", resultado);
	return 0;	
}
