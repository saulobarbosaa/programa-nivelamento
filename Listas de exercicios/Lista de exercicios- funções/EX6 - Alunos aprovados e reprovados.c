#include <stdio.h>

void apresentaPorcentagem(int t, int a, int r) {
	
	int aprovados, reprovados;
	
	aprovados = (a * 100)/t;
	reprovados = (r * 100)/t;
	
	printf("Total de alunos: %d\n", t);
	printf("Aprovados: \t %d%%\n", aprovados); 
	printf("Reprovados: \t %d%%", reprovados);
}

//main

int main () {
	
	int totalAlunos, aprovados, reprovados;
	
	printf("Digite o total de alunos da sua turma: ");
	scanf("%d", &totalAlunos);
	
	printf("Digite o total de alunos aprovados e reprovados: ");
	scanf("%d%d", &aprovados, &reprovados);
	
	apresentaPorcentagem(totalAlunos, aprovados, reprovados);
		
	return 0;
}
