#include <stdio.h>
int main() {
	int n, i;
	float num, max = -1000000.0, min = 1000000.0;
	
	printf("Ingresa la cantidad de n�meros: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; ++i) {
		printf("%d. Ingresa un n�mero: ", i);
		scanf("%f", &num);
		
		if (num > max) {
			max = num;
		}
		
		if (num < min) {
			min = num;
		}
	}
	
	printf("El n�mero m�ximo es %.2f\n", max);
	printf("El n�mero m�nimo es %.2f", min);
	
	return 0;
}
