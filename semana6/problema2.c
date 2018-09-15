//Creado por Misael Rojas el 12 de Septiembre del 2018//

#include<stdio.h>

int main(){

	float file1=0.15, file2=100.1234;

	FILE *archivo;
	archivo=fopen("test1.txt", "w");

	fputs("\n Misael Rojas el 12-09-2018 \n Esta es una prueba de fputs...", archivo);
	fprintf(archivo, "Esta prueba de fprintf y sus variables:");

	fprintf(archivo, "%f %f \n", file1, file2);
	fclose(archivo);

	return 0;
}