#include <stdio.h>

int verifica_vetores_iguais(int *vet1, int *vet2, int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        if (vet1[i] != vet2[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int tamanho, i;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int vet1[tamanho], vet2[tamanho];

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("vet1[%d]: ", i);
        scanf("%d", &vet1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("vet2[%d]: ", i);
        scanf("%d", &vet2[i]);
    }

    if (verifica_vetores_iguais(vet1, vet2, tamanho)) {
        printf("Os vetores são iguais.\n");
    } else {
        printf("Os vetores são diferentes.\n");
    }

    return 0;
}