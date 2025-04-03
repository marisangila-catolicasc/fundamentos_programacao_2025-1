#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("Numero Par!\n");
    else
        printf("Numero Ímpar!\n");

    return 0;
}