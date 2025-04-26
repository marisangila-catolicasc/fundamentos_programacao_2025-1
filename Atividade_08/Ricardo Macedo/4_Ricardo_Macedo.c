#include <stdio.h>

int main() {
    int vetor[10], i;

    for(i = 0; i < 10; i++) {
        printf("digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("ordem de entrada:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nordem inversa:\n");
    for(i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}