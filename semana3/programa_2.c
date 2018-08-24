/*Este programa fue realizado por Misael Rojas el 20 de Agosto del 2018*/

#include<stdio.h>
#include<math.h>
#include<float.h>
#define PI 3.141592

int main()
{
	float variable_y2, variable_y, variable_x;
	char nombre[20];

	printf("Hola invitado, ¿Cual es tu nombre? \n");
	scanf("%s",nombre);
	printf("Bienvenido %s, este programa te permite realizar diversos calculos con una variable que escojas. \n", nombre);

	printf("Introduzca un numero cualquiera, que sera denominado x: \n");
	scanf("%f",&variable_x);
	printf("La variable x, sera entonces %f. \n", variable_x);
	
	variable_y = exp(-1 * variable_x);
	printf("La funcion que se utiliza en el primer calculo es exp, una función exponencial que computa e a la x pontencia, el resultado es: %f \n", variable_y);
	
	variable_y = cos(variable_x) + 2 * tan(variable_x / 2);
	variable_y2 = (variable_y * 180) / PI;
	printf("Las funciones que se utiliza en el segundo calculo son tan y cos, ambas funciones son trigonometricas y nos dan un resultado en radianes, por lo cual se aplica una operacción para transformarlos en grados. El resultado es %f. \n", variable_y2);

	variable_y = log(variable_x) + 3 * pow(variable_x,2);
	printf("El siguiente calculo consiste en sacar el logaritmo natural de la variable y sumarlo con la variable al cuadrado y multiplicala por 3, el resultado fue: %f \n", variable_y);

	return 0;
}


