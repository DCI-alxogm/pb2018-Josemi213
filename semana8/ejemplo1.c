#include <stdio.h>
int main () {
	int var = 20; // declaro la variable que voy a utilizar //
	int *ip; // declaración de la variable apuntador //
	ip = &var; // asigna la dirección de la variable var al apuntador //

	printf("La dirección de la variable var es : %x \n", (int) &var);
	printf("Dirección guardada en el apuntador ip: %x \n", (int) ip);
	printf("El valor de *ip: %d \n", ip);
	return 0;
}