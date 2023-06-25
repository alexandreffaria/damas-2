#include <stdio.h>

int main()
{
float salario;
printf("Salario: ");
scanf("%f", &salario);

if (salario < 100000)
	salario += 1000;

printf("Salario final %.2f\n", salario);
}
