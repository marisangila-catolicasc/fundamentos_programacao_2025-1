#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10];
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    for (i = 0; i < 10; i++) {
        vetorB[i] = vetorA[9 - i];
    }

    printf("\nVetor A:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorA[i]);
    }

    printf("\n\nVetor B:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorB[i]);
    }

    printf("\n");
    return 0;
}
