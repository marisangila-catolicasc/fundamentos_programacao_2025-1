#include <stdio.h>

int main() {
    int tabela[3][3], escolhaLinha;

    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("Informe o valor para a posição [%d][%d]:\n", linha, coluna);
            scanf("%d", &tabela[linha][coluna]);
        }
    }

    printf("Escolha qual linha deseja exibir:\n[0], [1] ou [2]\n");
    scanf("%d", &escolhaLinha);

    printf("\nConteúdo da linha [%d]: ", escolhaLinha);
    for (int coluna = 0; coluna < 3; coluna++) {
        printf("[%d] ", tabela[escolhaLinha][coluna]);
    }

    return 0;
}
