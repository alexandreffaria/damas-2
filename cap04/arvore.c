#include <stdio.h>

int main()
{
	int tamanho;

	printf("Tamanho: "); scanf("%d", &tamanho);
	for (int i = 1; i <= tamanho; i++){
		for (int j = 1; j<= i; j++){
			printf("* ");
		}
		putchar('\n');
	}
}
