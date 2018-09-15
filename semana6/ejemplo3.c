/*Este es el ejemplo 5 de la presentación, en el cual se imprime en la pantalla una arreglo de un tamaño 
predeterinado por el usuario, pero multiplicado por 2 en lineas al 10%*/

#include<stdio.h>

int main(){
	int N;
	float numero[N];

	printf("Introduce un numero, para el arreglo: /n");
	scanf("%i", &N);

	
 printf("Escribe una selección de numeros %i  de tu agrado \n", N);
	for(int i=0 ; i<N ; i++){
		
		numero[i]=0.0;
		scanf("%f", &numero[i]);
		numero[i]*=2;

	}

	printf("\n El numero multiplicado por dos es: \n");
		for (int i=0 ; i<N ; i++){
			printf("%f", numero[i]);
			if((i+1)%10==0){
				printf("\n");
			}
		}
		printf("\n");

		return 0;
}
