
#include <stdio.h>
#include <math.h>

int main()
{ 
	int contador=0;
	int N=0;
	int a;
	int r;
	for (a=1;a<=10;a=a+1){
		printf ("Ingresar un n�mero\n");
		scanf("%d", &N);
		r=N%3;
		if(r==0){
			contador++;
		}
	}
	printf("%d N�meros son divisibles por 3", contador);
}
