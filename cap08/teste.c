#include <stdio.h>

int main(){

    char ch = 'A';
    char * ptr = &ch;

    printf("%d\n", ptr);
    printf("%c\n",  *ptr);

}