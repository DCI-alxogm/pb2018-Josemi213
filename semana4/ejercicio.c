/*Este es el primer ejercicio de la semana 4, realizado por Misael Rojas el 31 de Agosto del 2018*/

#include <stdio.h>
#include <math.h>
	int main (){
	float Temp_inv, Temp_K, Temp_F, Temp_C, X, Y, Z, r, Om, Alp;		
		int coord,temp;
	temp = 1;
	while(temp > 0){
		printf("Elija una opcion: \n 1-(Temperaturas) \n 2-(Coordenadas) \n");		
		scanf("%i",&coord);
	
		switch (coord){
		case 1:
			printf("Inserte la temperatura Actual: \n");
			scanf("%f",&Temp_inv);
			Temp_F = ((Temp_inv * 9) / 5) + 32;
			Temp_K = Temp_inv + 273;	
			Temp_C = ( (Temp_F - 32) * 5) / 9;			
			printf("La temperatura en Farenheit es %f \n", Temp_F);				
			printf("La temperatura en Kelvin es %f \n",Temp_K);				
			printf("La temperatura en Celcius es %f \n",Temp_C);			
		printf("¿Quieres realizar alguna otra operacion? \n 1)Si \n 0)No \n");
		scanf("%i",&coord);
		if(coord > 0){temp++;}else{temp = -1;}
	break;

		case 2:
		printf("Introduce el valor de X: \n");
		scanf("%f",&X);
		printf("Introduce el valor de Y: \n");
		scanf("%f",&Y);
		printf("Introduce el valor de Z: \n");
		scanf("%f",&Z);
			r = sqrt(pow(X,2) + pow(Y,2) + pow(Z,2));
			Y = (180 / 3.1416) * Y;
			Z = (180 / 3.1416) * Z;
			X = (180 / 3.1416) * X;
			Om = acos(Z / r);
			Alp = atan(Y / X);
			X = (3.1416 / 180) * X;
			Y = (3.1416 / 180) * Y;
			Z = (3.1416 / 180) * Z;
			printf("El valor de r es: %f \n", r);
			printf("El valor de theta es: %f \n", Om);
			printf("El valor de omega es: %f \n", Alp);
			printf("Tu coordenada X es: %f \n", X);
			printf("Tu coordenada Y es: %f \n", Y);
			printf("Tu coordenada Z es: %f \n", Z);
		printf("¿Quieres realizar otra operacion? \n 1)Si \n 0)No \n");
		scanf("%i",&coord);
		if(coord > 0){temp++;}else{temp = -1;}
	break;
		default :
			printf("Se acabo el programa");	
		}
	}
}
