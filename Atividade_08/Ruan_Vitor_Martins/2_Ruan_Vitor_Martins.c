#include <stdio.h>
int main() {
    int tam, i, mai, men;

    printf("qual o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];

    for (i = 0; i < tam; i++) {
        printf("digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

      mai = men = vetor[0];

    for (i = 1; i < tam; i++) {
        if (vetor[i] > mai)
            mai = vetor[i];
        if (vetor[i] < men)
            men = vetor[i];
    }

    printf("maior valor: %d\n", mai);
    printf("menor valor: %d\n", men);

    return 0;
}
