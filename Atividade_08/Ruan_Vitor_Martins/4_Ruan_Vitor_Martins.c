#include <stdio.h>
int main() {
    int vetor[10], i;

    for (i = 0; i < 10; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\ninversa:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}
