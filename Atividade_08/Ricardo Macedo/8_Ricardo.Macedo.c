#include <stdio.h>

int main() {
    int vetor[10], i, num, encontrado = 0;

    printf("digite 10 números:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("digite um número para buscar: ");
    scanf("%d", &num);

    for(i = 0; i < 10; i++) {
        if(vetor[i] == num) {
            printf("número encontrado na posição %d\n", i);
            encontrado = 1;
        }
    }

    if(!encontrado) {
        printf("número não encontrado.\n");
    }

    return 0;
}

