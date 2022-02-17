#include <stdio.h>

int main () {
	
	int i, j;
	int matriz[4][4], soma = 0;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			matriz[i][j] = 1;
			
			if (i == j)
				printf("matriz[%d][%d]=%d\n", i, j, matriz[i][j]);
				else if (j > i) 
					soma = soma + matriz[i][j];				
				
					
		}
	}
	
	printf("Soma = %d", soma);
	
	return 0;
}
