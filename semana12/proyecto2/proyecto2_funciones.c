/*Creado por Misael Rojas*/

//Declaramos las librerias que necesitamos para nuestro programa.
#include<stdio.h>
#include <stdlib.h>
#include "proyecto2.h"


void print(double **aux, int w, int a); //Estas funciones son necesarias para la función main.
double **itera(double **aux, int w);
double **iniciar(double **aux, int w, float up, float down, float left, float right); //Estas son las variables que utilizaremos para obtener nuestras temperaturas, epsilon, y lados.


int main(){
	
	
	double **mat;

	
	float up, down, left, right, ia=10000000, e;


	int matriz, n;

//Se declara una función para abrir o cerrar nuestro arcvhivo debidamente, de donde obtendremos nuestras variables.
	FILE *read;
	read = fopen("inicio.txt", "r");

	//Se leé de nuestro archivo base nuestras variables.
	fscanf(read, "%f %f %f %f %i %i %f", &up, &down, &left, &right, &n, &matriz, &e);
	n+=2;

	mat = (double **) malloc (n*sizeof(double*));
	for(int i=0 ; i<n ; i++){
		mat[i] = (double *) malloc (n*sizeof(double));
	}
	
	
	mat=iniciar(mat, n, up, down, left, right);
//Se establece la condicional para el aumento de la temperatura.
	if(matriz==1){
		for(int i=1 ; i<n-1 ; i++){
			for(int j=1 ; j<n-1 ; j++)
			fscanf(read, "%lf", &mat[i][j]);
		}
	}
	
	fclose(read);

	int count=0;
//Se establece el tamaño del error y las  corrrecciones maximas debidas.
	while(ia>e && count<500){

		if(count<260 && count%10==0){		
			print(mat, n, count/10);
		}
		
		mat=itera(mat, n);
	
		ia=mat[n-1][n-1];
//Establece las condiciones para realizar la asignación en las temperaturas de la matriz
		count++;
		if(ia>e){
			print(mat, n, 300);	
		}
	}
	//Se imprimen nuestros resultados en nuestros documentos realizados en nuestra función main
	printf("\n %i\n", count);

	return 0;
}