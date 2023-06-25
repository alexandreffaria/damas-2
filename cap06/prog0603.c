#include <stdio.h>


void inic(int s[], int n){
    for(int i = 0; i < n; i++){
        s[i] = 0;
    }
}

int main(){

    int v[10];
    int x[20];

    inic(v, 10);
    inic(x, 20);

    for (int i = 0; i < 10; i++){
        printf("%d", v[i]);
    }
    putchar('\n');
    for (int i = 0; i < 20; i++){
        printf("%d", x[i]);
    }
    putchar('\n');

}