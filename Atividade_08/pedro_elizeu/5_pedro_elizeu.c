#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[5];
    
    printf("Digite 5 numeros para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }
    
    printf("Digite 5 numeros para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    
    printf("\nVetor C (soma de A + B):\n");
    for (int i = 0; i < 5; i++) {
        printf("C[%d] = %d + %d = %d\n", i, vetorA[i], vetorB[i], vetorC[i]);
    }
    
    return 0;
}