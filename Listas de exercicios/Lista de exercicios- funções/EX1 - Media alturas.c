#include <stdio.h>

//funções

float mediaAltura(float a1, float a2, float a3, float a4, float a5) {
	
	float soma;
	
	soma = (a1 + a2 + a3 + a4 + a5)/5;
	
	return soma;
}


//main

int main () {
	
	float a1, a2, a3, a4, a5;
	
	printf("Digite a sua altura: ");
	scanf("%f", &a1);
	
	printf("Digite outra altura: ");
	scanf("%f", &a2);
	
	printf("Digite outra altura: ");
	scanf("%f", &a3);
	
	printf("Digite outra altura: ");
	scanf("%f", &a4);
	
	printf("Digite outra altura: ");
	scanf("%f", &a5);
	
	printf("A media das alturas eh de: %.2f", mediaAltura(a1, a2, a3, a4, a5));
	
	return 0;
}
