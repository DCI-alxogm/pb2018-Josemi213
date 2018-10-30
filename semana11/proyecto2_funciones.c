/*Creado por Misael Rojas*/

#include<stdio.h>
#include <stdlib.h>


void print(double **aux, int w, int a);
double **itera(double **aux, int w);
double **iniciar(double **aux, int w, float up, float down, float left, float right);


int main(){
	
	
	double **mat;

	
	float up, down, left, right, ia=10000000, e;

	//la variable matriz sirve para indicar si se leeran valore iniciales de la placa (será "1") o si se inicia todo en 0 (será "0")
	int matriz, n;


	FILE *read;
	read = fopen("inicio.txt", "r");

	
	fscanf(read, "%f %f %f %f %i %i %f", &up, &down, &left, &right, &n, &matriz, &e);
	n+=2;

	mat = (double **) malloc (n*sizeof(double*));
	for(int i=0 ; i<n ; i++){
		mat[i] = (double *) malloc (n*sizeof(double));
	}
	
	
	mat=iniciar(mat, n, up, down, left, right);

	if(matriz==1){
		for(int i=1 ; i<n-1 ; i++){
			for(int j=1 ; j<n-1 ; j++)
			fscanf(read, "%lf", &mat[i][j]);
		}
	}
	
	fclose(read);

	int count=0;

	while(ia>e && count<500){

		if(count<260 && count%10==0){		
			print(mat, n, count/10);
		}
		
		mat=itera(mat, n);
	
		ia=mat[n-1][n-1];

		count++;
		if(ia>e){
			print(mat, n, 300);	
		}
	}
	
	printf("\n %i\n", count);

	return 0;
}