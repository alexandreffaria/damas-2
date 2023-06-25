#include <stdio.h>

linha(int tamanho, char ch){
    int i;
    for (i = 0; i <= tamanho ; i++){
        putchar(ch);
    }
    putchar('\n');
}


int main(){
    
    linha(10, '-');
    linha(5, '+');
    linha(15, '*');

}