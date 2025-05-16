#include <stdio.h>

int verifica_vetores_iguais(int *v1, int *v2, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (v1[i] != v2[i]) return 0;
    }
    return 1;
}

int main() {
    int tamanho;
    printf("digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int v1[tamanho], v2[tamanho];

    printf("digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &v1[i]);
    }

    printf("digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &v2[i]);
    }

    if (verifica_vetores_iguais(v1, v2, tamanho))
        printf("os vetores sao iguais.\n");
    else
        printf("os vetores sao diferentes.\n");

    return 0;
}
