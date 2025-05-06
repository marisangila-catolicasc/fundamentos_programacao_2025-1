#include <stdio.h>

int main() {
    int matriz[3][3], linha;

    printf("Insira os números que serão usados na matriz:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Número[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Qual das linhas (1, 2 ou 3) você deseja observar os elementos?\n");
    scanf("%d", &linha);

    if (linha >= 1 && linha <= 3){
        printf("Elementos da linha %d:\n", linha);
        for (int j = 0; j < 3; j++){
            printf("[%d] ", matriz[linha - 1][j]);
        }
        printf("\n");
    } else{
        printf("Linha inválida.\n");
    }
}