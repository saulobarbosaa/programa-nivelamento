#include <stdio.h>

typedef struct {
	
	int matricula;
	char nome[30];
	int serie;
	int turma;
	char sexo[10];
	int anoNascimento;
	char naturalidade[30];
	float media;
		
}alunos;

void cadastrarAlunos(alunos cadastro[3]) {
	
	int i;
	
	for(i = 0; i < 3; i++){
		
		printf("Aluno %d\n\n", i);
		
		printf("Digite sua matricula: ");
		fflush(stdin);
		scanf("%d", &cadastro[i].matricula);
		printf("Digite seu nome: ");
		fflush(stdin);
		fgets(cadastro[i].nome, 30, stdin);
		printf("Digite sua serie: ");
		scanf("%d", &cadastro[i].serie);
		printf("Digite sua turma: ");
		scanf("%d", &cadastro[i].turma);
		printf("Digite seu sexo: ");
		fflush(stdin);
		fgets(cadastro[i].sexo, 30, stdin);
		printf("Digite seu ano de nascimento: ");
		scanf("%d", &cadastro[i].anoNascimento);
		printf("Digite o estado em que voce nasceu: ");
		fflush(stdin);
		fgets(cadastro[i].naturalidade, 30, stdin);
		printf("Digite sua media: ");
		scanf("%f", &cadastro[i].media);
		fflush(stdin);	
	}
	
		
}

void imprimirDados(alunos cadastro[3]){

	int i;
	
	for(i = 0; i < 3; i++) {
		printf("Nome: %s", cadastro[i].nome);
		printf("Matricula: %d\n", cadastro[i].matricula);
		printf("Media: %f\n\n", cadastro[i].media);
	}
	
}

int main() {
	
	alunos aluno[3];
	
	cadastrarAlunos(aluno);
	imprimirDados(aluno);
	
	return 0;
}
