#include <stdio.h>

int main(){

    char s[100];
    char *ptr = s;

    printf("Me da uma string: "); gets(s);

    if (*ptr == '\0'){
        return;
    }

    while (*ptr != '\0'){
        putchar(*ptr++);
        
    }
    putchar('\n');

    ptr--;

    while(ptr >= s){
        putchar(*ptr--);
        
    }
    putchar('\n');
    

}