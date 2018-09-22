/*Este programa fue realizado por José Misael Rojas Sánchez.
Este programa lee de un archivo externo una potencia que le da a una función
También evalua la función y calcula la integral de "f(x)" desde su valor minimo
hasta el valor "x".*/

#include<stdio.h>
#include<math.h>

int main(){

	FILE*lec;
	lec=fopen("Variables.txt", "r"); // Esta parte abre el archivo o crea el archivo que asignara las variables//
	int p, N, i, k; // Introduzco las variables que voy a utilizar.
	float sum=0, f, I, start, x, h, y=0;

	fscanf(lec, "%i %f %f %i %i", &p, &start, &x, &N, &k); // Se escanean las variables en el documento.

	FILE*esc;
	esc=fopen("Resultado.txt", "w"); // Inicio el documento donde se registraran mis resultados.
	h=(x-start)/N; // Creo la integral.
	for (i=0; i<N; i++){
		y=pow(start+i*h,p);
		sum=sum+y;
	}

	for(i=start; i<=x; i++){ //Empieza los calculos mediante la variante for para todos los valores de n hata x//
		fprintf(esc, "El valor de x es %i \n", i);
		f=pow(i, p);
		fprintf(esc, "El valor de f(x) es %f \n", f);
		I=h*(((i+x)/2)+sum);
		fprintf(esc, "El valor de F(x) es %f \n", I);
	}
	fclose(lec);
	fclose(esc);

	return 0;
}
