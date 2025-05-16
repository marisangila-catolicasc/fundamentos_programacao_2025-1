#include <stdio.h>

int soma_matriz(int matriz[3][3], int linhas, int colunas) {
    int soma = 0;
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }
    
    return soma;
}

int main() {
    int matriz[3][3];
    
    printf("Digite um vetor de inteiros:  \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    

    int resultado = soma_matriz(matriz, 3, 3);

    printf("O resultado da soma de todos os numero da matriz eh igual a %d!", resultado);
    
    return 0;
}