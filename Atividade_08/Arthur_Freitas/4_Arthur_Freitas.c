#include <stdio.h>

int main() {
    int vetor[10];
    
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nOrdem de entrada:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    printf("\nOrdem inversa:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}