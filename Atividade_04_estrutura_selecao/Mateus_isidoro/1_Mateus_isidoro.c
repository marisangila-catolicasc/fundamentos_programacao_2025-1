#include <stdlib.h>
#include <stdio.h>
int main() {
    int numero;
    printf("Escolha um numero positivo ou negativo\n");
    scanf("%d", &numero);
    if(numero >= 0){
        printf("E positivo");
    }else{
        printf("E negativo");
    }
    return 0;
}
