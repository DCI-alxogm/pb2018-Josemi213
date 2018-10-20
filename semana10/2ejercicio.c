/* Este programa fue relizado por Misael Rojas, y trata de separar una serie de porblemas juntos
mediante una serie de comandos e indicaciones */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	void velocidad(float Pin, float Pfin, float T);
	printf("El programa que se esta ejecutnado es: %s \n", argv[0]);
	float Pin, Pfin, T;
	int num;
	if(argc==4){
		Pin=atof(argv[1]);
		Pfin=atof(argv[2]);
		T=atof(argv[3]);
		velocidad(Pin, Pfin, T);
	}
	else if(argc>4){
		printf("Mas argumentos de los necesarios \n");
	}
	else{
		printf("El programa calcula la velocidad de un objeto, se requieren 3 argumentos: posición inicial, posición final, tiempo. \n");
	}
	return 0;
}