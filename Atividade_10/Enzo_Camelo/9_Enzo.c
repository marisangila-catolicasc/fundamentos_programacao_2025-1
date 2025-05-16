#include <stdio.h>

int soma_matriz(int linha, int coluna, int matriz[][coluna]) {
    int soma = 0;
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main(){
    int linha, coluna, soma;

    printf("Digite quantas linhas a matriz tera:\n");
    scanf("%d", &linha);
    
    printf("Digite quantas colunas a matriz tera:\n");
    scanf("%d", &coluna);

    int matriz[linha][coluna];
    
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf("Digite o valor da posição [%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    soma = soma_matriz(linha, coluna, matriz);

    printf("Soma dos elementos da matriz: %d\n", soma);
    return 0;
}