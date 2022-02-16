#include <stdio.h>

int main () {
	
	float n1[3], n2[3], n3[3], n4[3], media[3], mediafinal[3], examefinal;
	char nome[3][30];
	int i;
	
	//Entrada das notas e cálculo das medias
	
	for (i = 0; i < 3; i++){
		
		printf("Digite seu nome, aluno %d: ", i);
		fflush(stdin);
		fgets(nome[i], 30, stdin);
		
		printf("\nDigite a nota %d: ", i);
		scanf("%f%f%f%f", &n1[i], &n2[i], &n3[i], &n4[i]);
		
		
		media[i] = (n1[i] * 2 + n2[i] * 3 + n3[i] * 4 + n4[i] * 1) / 10;		
	}
	
	for(i = 0; i < 3; i++)
		printf("Media %d = %.1f\t", i, media[i]);
	

	
	//Aprovado ou reprovado
	printf("\n");
	printf("\nNome\t\tN1\tN2\tN3\tN4\tMedia\tResultado\n");	
	for (i = 0; i < 3; i++) {
	
		if(media[i] >= 7) 
			printf("%s\t\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\tAprovado.\n", nome[i], n1[i], n2[i], n3[i], n4[i], media[i]);
			
		else if(media[i] < 5)
			printf("%s\t\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\tReprovado.\n", nome[i], n1[i], n2[i], n3[i], n4[i], media[i]);			
				else if(media[i] >= 5 && media[i] <=6.9) {
					printf("%s\t\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\tExame Final.\n", nome[i], n1[i], n2[i], n3[i], n4[i], media[i]);
					
				}	
	}
	
	for(i = 0; i < 3; i++) {
		if (media[i] >= 5 && media[i] <= 6.9) {
			printf("\nDigite a sua nota do exame final, aluno %s: ", nome[i]);
			scanf("%f", &examefinal);
			
			mediafinal[i] = (media[i] + examefinal) / 2;	
			printf("Media final: %f", mediafinal[i]);		
		}
			if(media[i] >= 5 && media[i] <= 6.9 && mediafinal[i] >= 5){
				printf("\nAprovado!");
				media[i] = mediafinal[i];
				printf("\nMedia %d = %f\n", i, media[i]);
			}
				if(media[i] >= 5 && media[i] <= 6.9 && mediafinal[i] < 5){
					printf("\nReprovado!");
					media[i] = mediafinal[i];	
					printf("\nMedia %d = %f\n", i, media[i]);						
				}
	}
	
	return 0;

	}
	
	
