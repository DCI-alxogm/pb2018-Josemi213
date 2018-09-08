/*Este programa fue realizado por Misael Rojas el 7 de septiembre del 2018*/

#include<stdio.h>
#include<math.h>

int main(){
	
	int end, beg, equal, i, j, pri, n=1, cont;
	
	while(n==1){
		cont=0;
	
	printf("Introduce el numero con el que inicies la serie de numeros: \n");
	scanf("%i",&beg);
	printf("Introduce el termino con el que quieras terminar la serie numerica: \n");
	scanf("%i",&end);
		if((beg-end)<=100){
	printf("Los siguientes numeros son los primos dentro de tu sucesión numerica: \n");
		for(equal=beg;equal<=end;equal++){
			for (i=2;i<equal;i++){
				j=0;
				for(i=1;i<=equal;i++){
					if(equal%i==0){
				j++;
			}
		}
		if(j==2){
	printf("%i\n",equal);
			}
			else{
	printf("\n");
			}
		}
	}	
}
else{
	printf("Los intervalos introducidos no son validos \n");
	}
	printf("¿Quiere evaluar alguna otra sucesión numerica? Introduzca 1 para si, 2 para no. \n");
	scanf("%i",&pri);
}
return 0;
}


	
	
