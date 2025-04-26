#include <stdio.h>

int main() {
    int vetor[20], i, numero, cont = 0;

    printf("digite 20 números:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("digite um número para buscar: ");
    scanf("%d", &numero);

    for(i = 0; i < 20; i++) {
        if(vetor[i] == numero) {
            cont++;
        }
    }

    printf("o número %d aparece %d vezes no vetor.\n", numero, cont);

    return 0;
}

