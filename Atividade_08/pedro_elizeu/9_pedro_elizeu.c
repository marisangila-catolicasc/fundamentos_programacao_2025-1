#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetor3[10];
    
    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("Digite 5 numeros para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        vetor3[i*2] = vetor1[i];
        vetor3[i*2+1] = vetor2[i];
    }
    
    printf("\nVetor intercalado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");
    
    return 0;
}