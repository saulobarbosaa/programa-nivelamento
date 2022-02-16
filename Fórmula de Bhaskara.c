#include <stdio.h>
#include <math.h>

int main () {
	char afirmacao;
	double a, b, c, x1, x2, delta;
	do{
		printf("Digite um valor para a, b e c: \n");
		scanf("%lf %lf %lf", &a, &b, &c);
	
		//printf("%.1lf, %.1lf, %.1lf", a, b, c);
	
		if(a != 0) {
		
			delta = pow(b,2) - 4 * a * c;
			
			if (delta > 0) {
			
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);
				printf("\n X1 = %.1lf e X2 = %.1lf", x1, x2);
				
			}
			else {
				printf("Impossivel calcular pois o valor de delta eh negativo");
			}
	
		}
		else{
			printf("Impossivel calcular pois o A é igual a zero");
		}
		
		printf("\nDeseja calcular novamente? ");
		fflush(stdin);
		scanf("%c", &afirmacao);
		
		
	}while(afirmacao == 'S' || afirmacao == 's');
	
	
	/*
	printf("Digite um valor para a, b e c: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	//printf("%.1lf, %.1lf, %.1lf", a, b, c);
	
	if(a != 0) {
	
		delta = pow(b,2) - 4 * a * c;
		
		if (delta > 0) {
		
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("\n X1 = %.1lf e X2 = %.1lf", x1, x2);
			
		}
		else {
			printf("Impossivel calcular");
		}

	}
	else{
		printf("Impossivel calcular");
	}
	
	*/
	
	return 0;
}
