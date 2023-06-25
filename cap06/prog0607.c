#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM]){
    for (int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            s[i][j] = ESPACO;
        }
    }
}

void mostra(char s[DIM][DIM]){
    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++){
            printf("%c %c", s [i][j], j == DIM-1 ? ' ' : '|');
        }
        if (i != DIM-1){
            printf("\n-------\n");
        }
        putchar('\n');
    }
}


int main(){

    char velha [DIM][DIM];
    int posx, posy;
    char ch = '0';
    int n_jogadas = 0;

    inic(velha);
    while(1){

        mostra(velha);

        printf("\n Sua vez: ");
        scanf("%d %d", &posx, &posy);
        posx--; posy--;

        if(velha[posx][posy] == ESPACO){
            velha[posx][posy] = ch = (ch == '0' ? 'X' : '0');
            n_jogadas++;
        }
        else{
            printf("Posição já ocupada nenem!\n");
        }

        if(n_jogadas == DIM*DIM){
            break;
        }
    }

    mostra(velha);

}