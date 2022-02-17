#include <stdio.h>
#include <math.h>

//funções

float calcularMediaSimples(float a, float b) {
	float media;
	media = (a + b) / 2;
	
	return media;
}

//main

int main () {
	
	float n1, n2, mediaSimp;
	int i;
		
	for (i = 0; i < 3; i++) {
		printf("Digite n1: ");
		scanf("%f", &n1);
		
		printf("Digite n2: ");
		scanf("%f", &n2);
		
		mediaSimp = calcularMediaSimples(n1, n2);
		printf("Media simples: %f\t", mediaSimp);
		
		if (mediaSimp > 5) 
			printf("Aprovado!\n\n");	
		else 
			printf("Reprovado!\n\n");
	}
		
	return 0;
}

