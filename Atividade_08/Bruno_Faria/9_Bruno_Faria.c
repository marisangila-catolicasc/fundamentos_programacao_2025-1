#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[10];

    printf("Digite 5 numeros para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("A[%d]: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("\nDigite 5 numeros para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d]: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    int j = 0;
    for (int i = 0; i < 5; i++) {
        vetorC[j++] = vetorA[i];  
        vetorC[j++] = vetorB[i];  
    }

    printf("\nVetor C (intercalado):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
