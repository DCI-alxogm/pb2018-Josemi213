/*Este programa fue realizado por Misael Rojas el 7 de septiembre del 2018*/

#include<stdio.h>
#include<math.h>

int main()
{
	float res;
	int n=3,k,j;

	for(j=0;j<n;j++){
		for(k=0;k<n;k++){
			res=j*k*1.0;
			printf("%i %i %f \n" ,j,k,res);
	}
}
			return 0;
}
