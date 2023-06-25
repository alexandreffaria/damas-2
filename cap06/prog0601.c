#include <stdio.h>

int main(){

    float salario[12];
    float total;

    for (int i = 0; i < 12 ; i++){
        printf("me da o salario do mes %d\n", i+1);
        scanf("%f", &salario[i]);
    }

    puts("Mes   Valor");
    for(int i = 0; i < 12; i++){
        printf("%3d %9.2f\n", i+1, salario[i]);
        total += salario[i];
    }

    printf("Total anual: %9.2f\n", total);
    

}