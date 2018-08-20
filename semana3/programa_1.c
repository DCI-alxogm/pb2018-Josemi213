/*Este programa fue creado por Misael Rojas el 20 de agosto del 2018*/

#include<stdio.h>
#include<float.h>

int main()
{
	float temp_c, temp_f, temp_k, resultado;
	char nombre_invitado[20];

	printf("Bienvenido, ¿Cual es tu nombre? \n");
	scanf("%s",&nombre_invitado);
	printf("Tu nombre es: %s. \n", nombre_invitado);
	
	printf("Este programa transforma los grados °C en °K y °F \n");

Inicio » Tutorial de lenguaje C » Ejercicios resueltos » Saludo
Ejercicio de lenguaje C - Saludo
12
Escribir en lenguaje C un programa que:

1º) Pida por teclado el nombre (dato cadena) de una persona.

2º) Muestre por pantalla el mensaje: "Hola <nombre>, buenos días.".

En pantalla se verá:

￼
Solución: uso de funciones printf, scanf y getch
/* Programa: Saludo */

#include <conio.h>
#include <stdio.h>

int main()
{
    char nombre[20];

    printf( "Introduzca su nombre: " );
    scanf( "%s", nombre );
    printf( "Hola %s, buenos d%cas.", nombre, 161 );

    getch(); /* Pausa */

    return 0;
}
char nombre[20] sirve para declarar la variable nombre de tipo cadena, pudiendo contener 20 char (caracteres).
El especificador de formato %s debe utilizarse tanto en scanf como en printf para las cadenas (strings).
Obsérvese que, en este ejercicio, en la función scanf no hay que escribir el carácter ampersand (&) antes de la variable nombre. Esto es así, ya que, para las variables de tipo cadena (arrays de caracteres), su propio identificador (nombre, en este caso) ya hace referencia a la dirección de memoria donde se va a almacenar el dato.
161 es el número decimal que corresponde al carácter (í) con tilde en ASCII.
﻿	printf("Introduce la temperatura que quieras transformar: \n");
	scanf("%f",&temp_c);
	printf("La temperatura a transformar es %f \n", temp_c);
	
	temp_f = temp_c * 1.80 + 32.00;
	printf("La temperatura en Fahrenheit es %f \n", temp_f);

	temp_k = temp_c + 273.15;
	printf("La temperatura en Kelvin es %f \n", temp_k);

	temp_c = (temp_f - 32.00) / 1.80;
	printf("La comprobacion en la siguiente, la temperatura en Celsius original, es: %f \n", temp_c);

	return 0;
}

