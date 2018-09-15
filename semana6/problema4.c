//Este problema fue realizado por Misael Rojas el 12 de Septiembre del 2018//

#include<stdio.h>

int main(){

	FILE *read;
	read=fopen("estudiantes.txt", "r");

	int N;
	int act=0;
	fscanf(read, "%i", &N);

	char entry;
	float edad[N], gen[N], sem[N], semestre[9], hombre=0, mujer=0,
	float promedio=0, edadsem[0], edadprom=0;
	float califsem[9], cali[N], temp;

	for(int i = 0; i < count; ++i)
	{
		/* code */
	}(int i=0 ; i<9 ; i++){
		semestre[i]=0;
		edadsem[i]=0;
		califsem[i]=0;
	}  

	for(int i=0 ; i<N ; i++){
		fscanf(read,"%f %c %f %f", &edad[i], &aux, &sem[i], &cali[i]);
		if(aux=='H' || aux=='h'){
			gen[i]=0;
			hombre++;
		}
		else{
			gen[i]=1;
			mujer++;
		}
		act=sem[i]-1;
		edadsem[act]+=edad[i];
		edadprom+=edad[i];
		califsem[act]+=cali[i];
		promedio+=cali[i];
		semestre[act]++;
	}
	fclose(read);

	FILE *abstr;
	abstr=fopen("Resumen.txt", "w");
	fprintf(abstr, "Este es un documento donde se resumen los datos de los alumnos \n");

	fprintf(abstr, "Total de estudiantes: %i, de los cuales %0.0f son mujeres y %0.0f son hombres \n", N, mujer, hombre);
	fprintf(abstr, "Esudiantes por semestre: \n");
	for (int i=0; i<8 ; i++){
		fprintf(abstr, "Semestre %iº %0.0f\n", i+1, semestre[i]);
	}
	temp=promedio/N;

	fprintf(abstr, "Promedio de calificacines de alumnos: %0.2f \n", temp);
	fprintf(abstr, "Promedio de calificacines por semestre: \n");
	for(int i=0 ; i<8 ; i++){
		if(semestre[i]!=0){
			temp=califsem[i]/semestre[i];
		}
		else{
			temp=0;
		}
		fprintf(abstr, "Semestre %iº %0.2f \n", i+1, temp);
	}

	temp=edadprom/N;
	fprintf(abstr, "Promedio de edad de los alumnos: %0.02f \n", temp);
	fprintf(abstr, "Promedio de edad por semestre: \n");
	for(int i=0 ; i<8 ; i++){
		if(semestre[i]!=0){
			temp=edadsem[i]/semestre[i];
		}
		else{
			temp=0;	
	}
	fprintf(abstr, "Semestre %iº %0.2f \n", i+1, temp);
	}
	fprintf(abstr, "\n");
	fclose(abstr);

	return 0;
}
