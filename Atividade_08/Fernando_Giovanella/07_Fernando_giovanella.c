#include <stdio.h>

int main() {
    int vetor[10], inversor[10];

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        inversor[i] = vetor[9 - i];
    }

    printf("\nOrdem inversa:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", inversor[i]);
    }

    return 0;
}