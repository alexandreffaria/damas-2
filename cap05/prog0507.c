#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int dobro(int x){
    return 2*x;
}

int main(){

    int n, i, total;

    printf("Me da dois n:\n");
    scanf("%d%d", &n, &i);

    total = soma(n,i);

    printf("%d + %d = %d\n", n, i, total);
    printf("%d * 2 = %d e %d * 2 = %d\n", n, dobro(n), i, dobro(i));


}