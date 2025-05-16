#include <stdio.h>

int verifica_vetores_iguais(int *v1, int *v2, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (v1[i] != v2[i]) return 0;
    }
    return 1;
}

int main() {
    int tamanho;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int v1[tamanho], v2[tamanho];

    printf("Digite os elementos do primeiro:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os elementos do segundo:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &v2[i]);
    }

    if (verifica_vetores_iguais(v1, v2, tamanho))
        printf("Os vetores são iguais.\n");
    else
        printf("Os vetores são diferentes.\n");

    return 0;
}
