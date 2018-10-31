/*Creado por Misael Rojas el 22 de Octubre del 2018*/

//Declaramos las librerias necesarias
#include<stdio.h>
#include <stdlib.h>



//Declaro mis variables utilizando apuntadores para poder reservar memoria.
double **iniciar(double **aux, int w, float up, float down, float left, float right){
	
//inicio mis variables y les asigno un valor con mis arreglos, para que estos cambien a traves de las distintas matrices.
	for(int i=1 ; i<w-1 ; i++){
		aux[0][i]=up;
		aux[w-1][i]=left;
		aux[i][0]=right;
		aux[i][w-1]=down;
	}
	
	for(int i=1 ; i<w-1; i++){
		for(int j=1; j<w-1 ; j++){
			aux[i][j]=0.0;	
		}
	}
//Cierro la parte de mi primer programa.
	return aux;
}



//Asigno mas apuntadores para almacenar información que se utilizara para equlibrar mis temperaturas en todos los documentos.
void print(double **aux, int w, int a){	

	//Este sera el nombre que se le pondra a mis distintos archivos.
	char name[20]={'M', '.', 't', 'x', 't', '\0'};

	
	name[0]=a +'a';
	char *matriz;
	
	//Aquí creo mis archivos donde voy a escribir mis matrices.
	matriz=name;
	FILE *write;

	//Las condiciones de que no exceda cierto limite
	if(a!=300){
		write = fopen(matriz, "w");
	}
	if(a==300){
		write = fopen("equilibrar.txt", "w");
	}


	for(int i=0 ; i<w; i++){
		for(int j=0; j<w ; j++){
			fprintf(write, "%0.3f\t", aux[i][j]);
		}
		fprintf(write, "\n");		
	}
	fprintf(write, "\n");


	fclose(write);
}


//Aquí establezco el número maximno de iteraciones según la temperatura máxima, según las condiciones.

double **itera(double **aux, int w){
	double sum=0, max=0, temp=0, est=0;	
	

	for(int i=1 ; i<w-1 ; i++){
		for(int j=1 ; j<w-1 ; j++){			
			est=0, temp=0;
			sum=aux[i-1][j]+aux[i+1][j]+aux[i][j-1]+aux[i][j+1];
			est=aux[i][j];			
			aux[i][j]=(sum/4.0);


			temp=(aux[i][j]-est)/aux[i][j];
			if(temp<0){
				temp*=-1;
			}		
			if(temp>max){

							
				max=temp;

				
				aux[w-1][w-1]=max;	
			}
		}
	}

	return aux;
}