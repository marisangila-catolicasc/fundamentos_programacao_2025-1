#include <stdlib.h>
#include <stdio.h>
int main() {
    int numero;
    printf("Escolha um numero positivo ou negativo\n");
    scanf("%d", &numero);
    if(numero >= 0){
        printf("É positivo");
    }else{
        printf("É negativo");
    }
    return 0;
}