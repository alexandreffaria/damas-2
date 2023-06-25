#include <stdio.h>

int main()
{
float quilos = 1.0E3;
double gramas = 1.0e6;
float n_toneladas;

printf("Quantas tons?");
scanf("%f", &n_toneladas);

printf("Quilos: %f = %e\n", n_toneladas * quilos, n_toneladas * quilos);
printf("Gramas: %f = %e\n", n_toneladas * gramas, n_toneladas * gramas);

}
