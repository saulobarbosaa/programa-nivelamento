#include <stdio.h>

// funcoes

void apresentaClassificacao () {
	
	printf("IDADE <= 10 = CRIANCA \n 10 > IDADE < 18 = ADOLESCENTE \n 18 >= IDADE < 25 = JOVEM \n 25 >= IDADE <= 58 = ADULTO \n IDADE > 58 = IDOSO");	
	}

int calcularIdade (int anoAtual, int anoNascimento) {
	return anoAtual - anoNascimento;
}

void obtemNivel(int idade) {
	
	switch(idade){
		case 1 ... 10: printf("\nSua classificacao eh: crianca"); break;
		case 11 ... 17: printf("\nSua classificacao eh: adolescente"); break;
		case 18 ... 24: printf("\nSua classificacao eh: jovem"); break;
		case 25 ... 58: printf("\nSua classificacao eh: adulto"); break;
		case 59 ... 100: printf("\nSua classificacao eh: idoso"); break;
		default: printf("\nidade invalida");
	}
	
}

//main
int main () {
	
	int anoAtual, anoNascimento, idade;
	
	printf("Digite o seu ano de nascimento e o ano atual: ");
	scanf("%d%d", &anoNascimento, &anoAtual);
	
	idade = calcularIdade (anoAtual, anoNascimento);
	printf("Sua idade eh: %d\n\n", idade);
	
	apresentaClassificacao();
	
	obtemNivel(idade);
		
}
