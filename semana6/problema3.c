//Creado por Misael Rojas el 12 de Septiembre del 2018//

#include<stdio.h>

int main(){

	char read[250];
	float file1, file2;
	FILE *archivo;

	archivo=fopen("test1.txt", "r");

	for(int i=0 ; i<4 ; i++){
		fgets(read, 255, (FILE*)archivo);
		printf("%s \n", read);
	}
	fscanf(archivo, "%f, %f", &file1, &file2);
	printf("%f, %f \n", file1, file2);

	fclose(archivo);

	return 0;
}