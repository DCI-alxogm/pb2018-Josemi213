/* Este programa fue realizado por Misael Rojas, y genera una secuencia de coordenadas
x, y, z que formen un arreglo de puntos espaciados */

#include <stdio.h>
#include <stdlib.h>

int main(int n, char *let[], float d){

	char *nombre_archivo;
	int i;
	float x[n], y[n], z[n];
	FILE *arc;

	nombre_archivo=let[1];
	arc=fopen(nombre_archivo, "w+");
	printf("Introduzca el inicio para cada coordenada x, y, z: \n");
	scanf("%f %f %f", &x[1], &y[1], &z[1]);

	fprintf(arc, "x		y	z \n %f 	%f 		%f", x[1], y[1], z[1]);
	for(i=0; i<=n; i++){
		x[i]=x[i]+d;
		x[i]=x[i]+d;
		x[i]=x[i]+d;
		fprintf(arc, "%f 	%f 		%f \n", x[1], y[1], z[1]);
	}
	return 0;
}