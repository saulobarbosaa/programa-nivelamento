#include <stdio.h>
#include <math.h>

float potencia(float a, float b) {
	
	return pow(a, b);
}

int main () {
	
	float x, n;
	
	printf("Digite um valor para x e n: ");
	scanf("%f%f", &x, &n);
	
	printf("O valor elevado eh de: %.0f", potencia(x, n));
	
	return 0;
}
