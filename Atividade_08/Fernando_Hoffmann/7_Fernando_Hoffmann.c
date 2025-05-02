#include <stdio.h>

int main() {
    int vetor[10], inverso[10];
    
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        inverso[i] = vetor[9 - i];
    }

    printf("\nVetor inverso:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", inverso[i]);
    }

    return 0;
}