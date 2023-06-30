#include <stdio.h>

int main(){

    char nome[50], sobrenome[50];

    printf("Nome: "); scanf("%s", nome);
    printf("Sobrenome: "); scanf("%s", sobrenome);

    printf("Nome completo: %s %s\n", nome, sobrenome);

}