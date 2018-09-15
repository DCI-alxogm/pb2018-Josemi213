/*Creado por Misael Rojas el 11 de Septiembre del 2018*/

#include<stdio.h>

int main(){

	int n=10, genero[n], semestre[n], edad[n], count=0, count2=0, i, j;
	float promedio=0, total, calificaciones[n];

	for(i=0; i<n; i++){

		printf("Edad de cada estudiante \n");
		scanf("%i", &edad[i]);

		printf("El genero de los alumnos, (0 para masculino y 1 para femenino): \n");
		scanf("%i", &genero[i]);

		printf("Introduce el semestre actual de los alumnos (1-9): \n");
		scanf("%i", &semestre[i]);

		printf("Introduce las calificaciones de los alumnos: \n \n");
		scanf("%f", &calificaciones[i]);
	}
	for(i=0; i<n; i++){
		total=total+calificaciones[i];
		promedio=total/n;
	}

	for(j=1; j<=9; j++){
		count=0;
		count2=0;
		for(i=0; i<n; i++){
			if(semestre[i]==j){
				if(genero[i]==0){
					count++;
				}
				if(genero[i]==1){
					count2++;
				}
			}
		}

		printf("El semestre es: %i \n", j);
		printf("Hay %i mujeres en este semestre \n", count2);
		printf("Hay %i hombres en este semestre\n", count);
	}

	printf("El promedio de los alumnos en esta escuela es %f \n", promedio);
return 0;
}

