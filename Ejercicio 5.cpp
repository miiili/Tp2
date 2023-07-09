#include <stdio.h>
int main() {
	int n, i;
	float num, max = -1000000.0, min = 1000000.0;
	
	printf("Ingresa la cantidad de números: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; ++i) {
		printf("%d. Ingresa un número: ", i);
		scanf("%f", &num);
		
		if (num > max) {
			max = num;
		}
		
		if (num < min) {
			min = num;
		}
	}
	
	printf("El número máximo es %.2f\n", max);
	printf("El número mínimo es %.2f", min);
	
	return 0;
}
