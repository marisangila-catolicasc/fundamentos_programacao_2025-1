#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10];
    
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        vetor2[i] = vetor1[9 - i];
    }
    
    printf("\nVetor original:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
    }
    
    printf("\nVetor invertido:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");
    
    return 0;
}