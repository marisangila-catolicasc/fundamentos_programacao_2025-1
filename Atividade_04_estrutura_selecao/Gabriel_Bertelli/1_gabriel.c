#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    float numero;
    
    printf("Digite um número: \n");
    scanf("%f", &numero);
    if (numero >= 0) {
        printf("O número que você digitou é positivo\n");
    }
    else {
        printf("O número que você digitou é negativo\n");
    }

    return 0;
    
}