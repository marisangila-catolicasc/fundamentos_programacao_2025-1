#include <stdio.h>

int main(void){
    float inicio, final, anos = 3, juros = 0.05;

    printf("Insira o valor do investimento inicial R$ \n");
    scanf("%f", &inicio);

    final = inicio * (inicio * juros * anos);

    printf("O valor do investimento final apos 3 anos sera de R$%.2f \n", final);

    return 0;
}