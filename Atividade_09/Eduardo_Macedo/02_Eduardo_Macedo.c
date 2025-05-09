#include <stdio.h>

int main() {
    int valores[3][3];
    int linhaEscolhida;

    printf("Insira os elementos de uma matriz 3 por 3:\n");

    for (int i = 0; i < 3; i++) {
        printf("Preenchendo linha %d: ", i);
        scanf("%d %d %d", &valores[i][0], &valores[i][1], &valores[i][2]);
    }

    printf("Informe o número da linha que deseja visualizar (0, 1 ou 2): ");
    scanf("%d", &linhaEscolhida);

    if (linhaEscolhida >= 0 && linhaEscolhida < 3) {
        printf("Conteúdo da linha %d: ", linhaEscolhida);
        for (int j = 0; j < 3; j++) {
            printf("%d ", valores[linhaEscolhida][j]);
        }
        printf("\n");
    } else {
        printf("Linha inexistente.\n");
    }

    return 0;
}
