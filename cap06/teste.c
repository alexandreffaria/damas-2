#include <stdio.h>

#define DIM 3

int main(){
    char velha[DIM][DIM] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

    velha [0][0] = 'X';
    velha [1][1] = 'X';
    velha [0][2] = '0';
    velha [2][2] = '0';

    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++){
            printf("%c %c", velha [i][j], j == DIM-1 ? ' ' : '|');
        }
        if (i != DIM-1){
            printf("\n-------\n");
        } 
    }

    putchar('\n');
}