
#include <stdio.h>

int main() {
    int vetor[20], alvo, i, ocorrencias = 0;

    printf("Informe 20 números inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Entrada %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número a ser buscado: ");
    scanf("%d", &alvo);

    for (i = 0; i < 20; i++) {
        if (vetor[i] == alvo) {
            ocorrencias++;
        }
    }

    printf("O número %d aparece %d vez(es) no vetor informado.\n", alvo, ocorrencias);

    return 0;
}
