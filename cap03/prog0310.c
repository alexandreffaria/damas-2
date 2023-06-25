#include <stdio.h>

int main()
{
	float salario;
	printf("Salario: ");
	scanf("%f", &salario);

	salario = salario > 1000 ? salario*1.05 : salario*1.07;
	printf("Novo salario %.2f\n", salario);
}
