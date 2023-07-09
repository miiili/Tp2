#include <stdio.h>
int main()
{
	int n, i;
	int t1 = 1, t2 = 1;
	int siguiente;
	
	printf("Introduce el número de términos de la sucesión de Fibonacci que quieres ver:\n");
	scanf("%d", &n);
	
	printf("Los primeros %d términos de la sucesión de Fibonacci son:\n", n);
	
	for (i = 1; i <= n; ++i)
	{
		printf("%d, ", t1);
		siguiente = t1 + t2;
		t1 = t2;
		t2 = siguiente;
	}
	return 0;
}
