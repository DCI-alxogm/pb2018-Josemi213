/*Este programa fue realizado por Misael Rojas el 16 de agosto del 2018*/

#include<stdio.h>

int main() 
{
	float edad, altura_metros, peso_kilogramos, talla_zapatos, resultado;

	printf("Hola invitado \n");
	printf("Bienvenido al segundo programa del curso. \n");
	
	printf("Introduce tu edad: \n");
	scanf("%f",&edad);
	printf("Tu edad es: %f \n", edad);
	
	printf("Introduce tu altura en metros con decimales: \n");
	scanf("%f",&altura_metros);
	printf("Tu altura es: %f metros. \n", altura_metros);
	
	printf("Introduce tu peso en kilogramos con decimales: \n");
	scanf("%f",&peso_kilogramos);
	printf("Tu peso es: %f kilogramos. \n", peso_kilogramos);
	
	printf("Introduce tu talla de zapatos: \n");
	scanf("%f",&talla_zapatos);
	printf("Tu talla de zapatos es %f \n", talla_zapatos);

	resultado = (edad + altura_metros) * peso_kilogramos / talla_zapatos;
	printf("El resultado de esta operacion es %f \n", resultado);

	resultado = ((edad + altura_metros) * peso_kilogramos) / talla_zapatos;
	printf("El resultado de esta operación es %f \n", resultado);

	resultado = (edad + altura_metros) * peso_kilogramos / talla_zapatos;
        printf("El resultado de esta operacion es %f \n", resultado);

	resultado = edad + (altura_metros * peso_kilogramos) / talla_zapatos;
	printf("El resultado de esta operación es %f \n", resultado);
	return 0;	
}
