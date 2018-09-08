/*Este documento fue realizado por Misael Rojas el 6 de Septiembre del 2018*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float temp_C, temp_K;
	float final,delta;
	int n,i,op=1;

	
	while(op==1){
	printf("Escriba aquí su temperatura en grados Celsius: \n");
	scanf("%f",&temp_C);
	printf("Ingrese aquí su temperatura final \n");
	scanf("%f",&final);
	printf("¿Cual es el numero de repeticiones requeridas? \n");	
	scanf("%i",&n);
	
	delta=(final-temp_C)/n;
	for(i=0;i<=n;i++){
		temp_K=temp_C+273.15;
		printf("%f %f\n", temp_C,temp_K);
		temp_C=temp_C+delta; // temp_c+=delta;
}
	printf("¿Quisieras volver a ejecutar el programa?, Si=1, No=Cualquier tecla \n");
	scanf("%i",&op);


}

	return 0;
}

