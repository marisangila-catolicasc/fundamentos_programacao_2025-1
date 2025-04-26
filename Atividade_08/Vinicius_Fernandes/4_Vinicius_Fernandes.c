#include <stdio.h>

int main() {
    int vetor[10];
    
    printf("Digite 10 numeros inteiros:\n");
    for(int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nOrdem de entrada: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\nOrdem inversa: ");
    for(int i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
