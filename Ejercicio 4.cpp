#include <stdio.h>
#include <math.h>

int main(void)
{
	int a=1;
	int b=1;
	int n;
	
	printf("Insertar un número\n");
	scanf("%d", &n);
	
	for (a=1; a<= n; a++){
		b=a*b;
	}
	printf("El factorial es= %d\n",b);
	getchar();
	return 0;
}
