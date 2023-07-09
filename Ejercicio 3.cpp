
#include <stdio.h>
#include <math.h>

int main()
{ 
	int a;
	float suma=0, promedio, num;
	for(a=0; a<10; a++)
	{
		printf("ingrese un numero real:");
		scanf("%f",&num);
		suma=suma+num;
	}
	promedio=suma/10;
	printf("\n El promedio es %.2f\n",promedio);
	
}
