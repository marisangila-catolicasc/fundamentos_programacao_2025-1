#include <stdio.h>

int main() {
    int veto[20], alvo, i, ocorrencia = 0;

    printf("escreva 20 numeros:\n");
    for (i = 0; i < 20; i++) {
        printf("entrada %d: ", i + 1);
        scanf("%d", &veto[i]);
    }

    printf("digite o numero para ser buscado:\n");
    scanf("%d", &alvo);

    for (i = 0; i < 20; i++) {
        if (veto[i] == alvo) {
            ocorrencia++;
        }
    }

    printf("O numero %d aparece %d vez/es no veto.\n", alvo, ocorrencia);

    return 0;
}