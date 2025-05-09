#include <stdio.h>

int main() {
    int dados[3][3];
    int escolhaLinha;

    printf("Informe os elementos da matriz 3x3 (3 números por linha separados por espaço):\n");
    for (int linhaAtual = 0; linhaAtual < 3; linhaAtual++) {
        printf("Linha %d: ", linhaAtual);
        scanf("%d %d %d", &dados[linhaAtual][0], &dados[linhaAtual][1], &dados[linhaAtual][2]);
    }

    printf("Informe o número da linha que deseja visualizar (0, 1 ou 2): ");
    scanf("%d", &escolhaLinha);

    if (escolhaLinha >= 0 && escolhaLinha < 3) {
        printf("Elementos da linha %d: ", escolhaLinha);
        for (int colunaAtual = 0; colunaAtual < 3; colunaAtual++) {
            printf("%d ", dados[escolhaLinha][colunaAtual]);
        }
        printf("\n");
    } else {
        printf("Linha inválida. Digite 0, 1 ou 2.\n");
    }

    return 0;
}
