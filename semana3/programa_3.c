/*Este programa fue realizado por Misael Rojas el 23 de Agosto del 2018*/

#include<stdio.h>
#include<math.h>
#include<float.h>

#define Pi 3.141592
	
	int main()
{
	float x, y, z, the, om, po, omº, theº;
	char nombre[20];

	printf("Bienvenido, introduce tu nombre: \n");
	scanf("%s",nombre);
	printf("Un gusto %s \n", nombre);

	printf("Este programa transforma tus cordenadas cartesianas a esfericas \n");
	printf("Introduce aquí tu coordenada X: \n");
	scanf("%f",&x);
	printf("Tu coordenada X es: %f \n", x);
	
	printf("Introduce aquí tu coordenada Y: \n");
	scanf("%f",&y);
	printf("Tu coordenada Y es: %f \n", y);

	printf("Introduce aquí tu coordenada Z: \n");
	scanf("%f",&z);
	printf("Tu coordenada Z es: %f \n", z);

	po = sqrt(pow(x,2) + pow(y,2) + pow(z,2));
	the = acos(z / po); 
	om = atan(y / x);  

	printf("Tus coordenadas cartesianas han sido cambiadas a esfericas y son las siguientes: \n");
	printf("%f, %f, %f radianes \n", po, the, om );

	theº = (180 * the) / Pi;
	omº = (180 * om) / Pi;

	printf("Tus coordenadas esfericas en grados son las siguientes: \n");
	printf("%f, %f, %f grados \n", po, theº, omº);

	printf("Ahora hagamos la comprobación de las coordenadas esfericas en radianes a coordenadas cartesianas. \n");
	printf("Las coordenadas esfericas son: %f, %f, %f \n", po, the, om);

	x = po * sin(the) * cos(om);
	y = po * sin(the) * sin(om);
	z = po * cos(the);
	
	printf("Las coordenadas cartesianas son: %f, %f, %f \n", x, y, z);
return 0;
}

	
