
#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,x1,x2,d;   //declaraci?n de variables
	
	printf( "\n   Introduzca el coeficiente a: " );
	scanf( "%f", &a );
	
	printf( "\n   Introduzca el coeficiente b: " );
	scanf( "%f", &b );
	
	printf( "\n   Introduzca el coeficiente c: " );
	scanf( "%f", &c );
	
	d=b*b-4*a*c;
	
	if (d>=0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf ("x1= %f \n", x1);
		printf ("x2= %f \n", x2);
	}
	else {
		printf ("Error: ra?ces complejas\n");
	}
	
	
}
