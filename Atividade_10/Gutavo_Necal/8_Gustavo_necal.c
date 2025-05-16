#include <stdio.h>

int verifica_vetores_iguais(int v1[], int v2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (v1[i] != v2[i]) return 0;
    }
    return 1;
}

int main() {
    int v1[5], v2[5];
    printf("Digite 5 números para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) scanf("%d", &v1[i]);
    printf("Digite 5 números para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) scanf("%d", &v2[i]);
    if (verifica_vetores_iguais(v1, v2, 5))
        printf("Vetores iguais.\n");
    else
        printf("Vetores diferentes.\n");
    return 0;
}
