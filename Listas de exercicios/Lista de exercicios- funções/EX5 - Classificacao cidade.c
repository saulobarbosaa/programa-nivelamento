#include <stdio.h>

void classificacao(int populacao) {
	
	switch(populacao){
		case 1 ... 5000: printf("vila\n"); break;
		case 5001 ... 15000: printf("distrito\n"); break;
		case 15001 ... 1000000: printf("cidade\n"); break;
		case 1000001 ... 100000000: printf("metropole\n"); break;
		default: printf("Numero fora de alcance\n");
	}
	
	
}

int main () {
	
	int populacao;
	char nome[50], afirmacao;
	
	
	do{
		
		printf("Digite o nome da cidade: ");
		fflush(stdin);
		gets(nome);
		
		printf("Qual a quantidade de cidadaos nessa cidade? ");
		scanf("%d", &populacao);
		
		printf("A cidade %s eh classificada como ", nome);
		classificacao(populacao);	
		
		printf("Deseja repetir a classificacao? s/n: ");
		scanf("%s", &afirmacao);
		
	}while(afirmacao == 's');
	
	printf("Classificacao finalizada! ");
	
	return 0;
}
