#include <stdio.h>

int main(){
	int n, num, soma;
	double  produto;
	printf("Numero: "); scanf("%d", &num);

	for (soma = 0, n = produto = 1; n <= num ; n++){
		soma += n;
		produto *= n;
	}

	printf("Soma = %d\nProduto = %e\n", soma, produto);
}
