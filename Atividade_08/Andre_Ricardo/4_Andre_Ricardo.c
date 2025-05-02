#include <stdio.h>

int main() {
    int vetor[10], i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Ordem de entrada:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nOrdem inversa:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
