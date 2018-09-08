/*Este programa fue realizado por Misael Rojas el 7 de septiembre del 2018*/

#include<stdio.h>
#include<math.h>

int main(){
	float exp_, log_, sin_, cos_, sqrt_;
	float end, spa, x;
	int i;

	printf("Bienvenido, esta aplicación funciona para una varibale X en cierto intervalo. \n");
	printf("Introduzca su variable X: \n");
	scanf("%f", &x);
	printf("Introduzca el final del intervalo: \n");
	scanf("%f", &end);
	printf("Introduzca aquí el espacio entre cada intervaloe: \n");
	scanf("%f", &spa);
	
	for(i=x; i<=end; i+=spa){
		exp_=exp(x);
	printf("Nuestra variable exponencial es: %f \n", exp_);
		cos_=cos(x);
	printf("El coseno de nuestra variable en radianes es: %f \n", cos_);
		log_=log(x);
	printf("La función logaritmica de nuestra variable es: %f \n", log_);
		sin_=sin(x);
	printf("El seno de nuestra variable en radianes es %f \n", sin_);
		sqrt_=sqrt(x);
	printf("La raíz cuadrada de nuestra variable es %f \n\n", sqrt_);
}
		return 0;
}
