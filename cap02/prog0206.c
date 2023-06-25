#include <stdio.h>

int main(){
	short int idade;
	int montante;
	long int n_conta;

	printf("Idade: ");
	scanf("%hd", &idade);
	printf("Montante a depositar: ");
	scanf("%d", &montante);
	printf("N da conta: ");
	scanf("%ld", &n_conta);

	printf("Idade: %hd, depositou %d, na conta %ld\n", idade, montante, n_conta);
}
