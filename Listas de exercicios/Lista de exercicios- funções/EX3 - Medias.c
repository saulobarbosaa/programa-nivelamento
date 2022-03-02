#include <stdio.h>
#include <math.h>

//funções

float calcularMediaSimples(float a, float b) {
	float media;
	media = (a + b) / 2;
	
	return media;
}

float calcularMediaPond1(float a, float b) {
	
	float media;
	
	media = (a * 4 + b * 6) / 10;
	
	return media;
}

float calcularMediaPond2(float a, float b) {
	
	float media;
	
	media = (a * 3 + b * 7) / 10;
	
	return media;
}

//main

int main () {
	
	float n1, n2, mediaSimp, mediaPond1, mediaPond2;
	int i;
		
	for (i = 0; i < 3; i++) {
		printf("Digite n1: ");
		scanf("%f", &n1);
		
		printf("Digite n2: ");
		scanf("%f", &n2);
		
		mediaSimp = calcularMediaSimples(n1, n2);
		printf("Media simples: %.1f\t", mediaSimp);
		
		mediaPond1 = calcularMediaPond1(n1, n2);
		printf("\nMedia ponderada com peso 4 e 6: %.1f\t\n", mediaPond1);
		
		mediaPond2 = calcularMediaPond2(n1, n2);
		printf("Media ponderada com peso 3 e 7: %.1f\t\n\n", mediaPond2);
		
	}
		
	return 0;
}
