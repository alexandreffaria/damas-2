#include <stdio.h>

int main(){
    char nome[20+1], sobrenome[20+1], completo[20 * 2 + 1];

    while(1){
        printf("Nome: "); gets(nome);

        if (strlen(nome) == 0){
            break;
        }

        printf("Sobrenome: "); gets(sobrenome);

        strcpy(completo, sobrenome);
        strcat(completo, ", ");
        strcat(completo, nome);
        puts("");
        puts(completo);
        puts("");

    }
}