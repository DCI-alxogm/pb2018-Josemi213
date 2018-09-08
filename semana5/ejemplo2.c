/*Este programa fue realizado por Misael Rojas el 7 de Septiembre del 2018*/

#include<stdio.h>
#include<math.h>

int main()
{
	float exp_;
	int n=10,j;

	for(j=0;j<n;j++){
		exp_=exp(j);
		printf("%i \t %f\n",j,exp_);
	}
	return 0;
}

