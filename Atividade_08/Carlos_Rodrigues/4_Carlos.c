#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 números inteiros!\n\n");
    for (int x = 0; x < 10; x++) {
        printf("Digite o valor do %d número: ", x + 1);
        scanf("%d", &vetor[x]);
    }

    printf("\nOrdem de entrada:\n");
    for (int x = 0; x < 10; x++) {
        printf("%d ", vetor[x]);
    }

    printf("\n\nOrdem inversa:\n");
    for (int x = 9; x >= 0; x--) {
        printf("%d ", vetor[x]);
    }
    
    return 0;
}
