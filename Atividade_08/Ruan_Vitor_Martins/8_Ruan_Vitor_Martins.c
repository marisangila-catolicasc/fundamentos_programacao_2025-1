#include <stdio.h>
int main() {
    int vetor[10], i, num, achadou = 0;

    for (i = 0; i < 10; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("numero pra buscar: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == num) {
            printf("posicao que foi encontrado: %d\n", i+1);
            achadou = 1;
        }
    }

    if (!achadou)
        printf("nao ta no vetor.\n");

    return 0;
}
