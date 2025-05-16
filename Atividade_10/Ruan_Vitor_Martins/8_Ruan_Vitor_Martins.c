#include <stdio.h>

int verifica_vetores_iguais(int v1[], int v2[], int tamanho) {
    int i = 0;
    while (i < tamanho) {
        if (v1[i] != v2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    int vetor1[3] = {1, 2, 3};
    int vetor2[3] = {1, 2, 3};
    int vetor3[3] = {2, 3, 4};

    if (verifica_vetores_iguais(vetor1, vetor2, 3) == 1) {
        printf("vetor1 e vetor2 sao iguais\n");
    } else {
        printf("vetor1 e vetor2 sao diferentes\n");
    }

    if (verifica_vetores_iguais(vetor1, vetor3, 3) == 1) {
        printf("vetor1 e vetor3 sao iguais\n");
    } else {
        printf("vetor1 e vetor3 sao diferentes\n");
    }

    return 0;
}

