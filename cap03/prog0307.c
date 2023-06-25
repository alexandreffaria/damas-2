#include <stdio.h>

int main()
{
	float salario, taxa;
	printf("Salario: ");
	scanf("%f", &salario);
	if (salario < 1000){
		taxa = .05;
	}
	else {
		if (salario < 5000){
			taxa = .11;
		}
		else{
			taxa = .275;
		}
	}

	printf("Salario: %.2f\nImposto: %.2f\nLiquido: %.2f\n", salario, salario*taxa, salario*(1.0-taxa));
}
