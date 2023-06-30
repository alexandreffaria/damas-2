#include <stdio.h>

int main(){
    char nome[100];

    while(1){
        puts("Nome: ");
        gets(nome);

        if (nome[0] == '\0'){
            break;
        }
        else{
            printf("Nome -> %s\n", nome);
        }
    }
}