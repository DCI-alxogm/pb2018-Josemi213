/*Este programa fue realiza por Misael Rojas, y calcula la orbita de la tierra
en torno al sol*/

#include<stdio.h>
#include<math.h>
#define Y 365.2425

int main(){

	FILE *info;
	FILE *planetas;

	info=fopen("Planetas.txt", "r");

	double vx[9], vy[9], vz[9], r, x[9], y[9], z[9];
	int i;
	float n, ti[9], te[9], hsum, G;
	char nombre[20];

printf("Este programa calcula la orbita de los planetas de nuestro sistem solar \n");

	for(i=0;i<=8;i++){

		 //Se abre el documento que contiene las variables x, y, z de la tierra.
		fscanf(info, "%s, %f, %f, %f, %f, %f, %f, %f, %f", &nombre[i], &x[i], &y[i], &z[i], &vx[i], &vy[i], &vz[i], &ti[i], &te[i]); //Escane la información necesaria para realizar las operaciones.

		planetas=fopen(nombre, "w"); //Selecciono el documento donde se van a registrar los resultados.

		for(n=ti[i]; n<=te[i]+hsum; n+=hsum){

			hsum=0.05;
            G=4.0*pow(3.14159265359,2);

			vx[i] = vx[i] * Y;
			vy[i] = vy[i] * Y;
			vz[i] = vz[i] * Y;

			x[i] = x[i] + (vx[i]*hsum);
			y[i] = y[i] + (vy[i]*hsum);
			z[i] = z[i] + (vz[i]*hsum);
			r = sqrt(pow(x[i],2) + pow(y[i],2) + pow(x[i],2));

			vx[i] = vx[i] - hsum*((G * x[i])/pow(r,3));
			vy[i] = vy[i] - hsum*((G * y[i])/pow(r,3));
			vz[i] = vz[i] - hsum*((G * y[i])/pow(r,3));

			fprintf(planetas, "\n %lf \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", &x[i], &y[i], &z[i], &vx[i], &vy[i], &vz[i], r);
			}
		}

	fclose(planetas);
	fclose(info);
return 0;
}
