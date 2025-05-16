#include <stdio.h>

int soma_matriz(int matriz[][100], int linhas, int colunas) {
    int total = 0;
    int i, j;
    
    for (i = 0; i < linhas; i++) {
        j = 0;
        while (j < colunas) {
            total += matriz[i][j];
            j++;
        }
    }
    
    return total;
}

int main() {
    int matriz[100][100];
    int linhas, colunas;
    
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);
    
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int resultado = soma_matriz(matriz, linhas, colunas);
    
    printf("A soma de todos os elementos da matriz é: %d\n", resultado);
    
    return 0;
}