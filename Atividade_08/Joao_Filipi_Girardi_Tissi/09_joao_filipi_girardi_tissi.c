
#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorAB_intercalado[10];

    printf("Digite 5 números para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 5 números para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetorB[i]);
    }

    printf("Vetor AB intercalado:\n");
    for (int i = 0; i < 5; i++) {
        vetorAB_intercalado[2 * i] = vetorA[i];
        
        vetorAB_intercalado[2 * i + 1] = vetorB[i];
        
        printf("%d\n%d\n", vetorAB_intercalado[2 * i], vetorAB_intercalado[2 * i + 1]);
    }

    return 0;
}
