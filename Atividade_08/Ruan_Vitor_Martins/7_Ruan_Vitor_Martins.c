#include <stdio.h>
int main() {
    int vetor[10], inver[10], i;

    for (i = 0; i < 10; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
      inver[i] = vetor[9 - i];
    }

    printf("invertido:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", inver[i]);
    }

    printf("\n");
    return 0;
}
