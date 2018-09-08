/*Este programa fue relizado por Misael Rojas el 7 de septiembdre del 2018*/

#include<stdio.h>

	int main()
{
	int x, n, i, r;
	
	while(r==1){
		printf("Introduzca aquí una variable entera X: \n");
		scanf("%i", &x);
		x=n;
		if(x>1){
			for(i=x; i>1; i--){
		n=n*(i-1);
		}
		printf("Nuestro numero al ser factorial es %i. \n", n);
	}else{
		if(n<0){
			printf("Imposible obtener el factorial de este número. \n");
	}else{
	printf("El 1 factorial siempre es igual a 1. \n ");
	}}
	printf("Si quiere calcular algun otro número factorial, introduzca 1, si desea cerrar el programa, introduzca cualquier otro número: \n");
	scanf("%i", &r);
		}
	return 0;
}
