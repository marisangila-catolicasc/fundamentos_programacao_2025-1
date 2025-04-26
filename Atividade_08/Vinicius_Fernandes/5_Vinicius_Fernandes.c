#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[5];
    
    printf("Digite 5 números para o vetor A:\n");
    for(int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }
    
    printf("\nDigite 5 números para o vetor B:\n");
    for(int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    
    printf("\nSomas armazenadas no vetor C:\n");
    for(int i = 0; i < 5; i++) {
        printf("C[%d] = %d + %d = %d\n", i, vetorA[i], vetorB[i], vetorC[i]);
    }
    
    return 0;
}