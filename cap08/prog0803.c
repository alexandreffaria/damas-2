#include <stdio.h>

int funcstrlen( char *s){
    char *ptr = s;

    while(*s != '\0'){
        s++;
    }

    return (int) (s-ptr);
}



int main(){
    
    char s[100];
    char *ptr = s;

    printf("Me da uma string: "); gets(s);

    printf("%d\n", funcstrlen(s));
}