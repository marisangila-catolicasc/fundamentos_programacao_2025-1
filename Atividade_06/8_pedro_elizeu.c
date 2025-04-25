#include <stdio.h>

int main() {
    int i, numero, maior;

    printf("Escreve o 1º número: ");
    scanf("%d", &numero);
    maior = numero;

    for(i = 1; i < 10; i++) {
        printf("Escreva o %dº número: ", i + 1);
        scanf("%d", &numero);
        if(numero > maior) {
            maior = numero;
        }
    }

    printf("O número maior é: %d\n", maior);

    return 0;
}	