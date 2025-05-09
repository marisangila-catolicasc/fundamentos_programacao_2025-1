#include <stdio.h>

int main() {
    int matriz[4][4];
    int soma_linhas_pares = 0;
    int soma_linha_2 = 0;
    int maior_valor, menor_valor;
    int linha_maior = 0, coluna_maior = 0;
    int linha_menor = 0, coluna_menor = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            if (i == 0 && j == 0) {
                maior_valor = matriz[i][j];
                menor_valor = matriz[i][j];
            } else {
                if (matriz[i][j] > maior_valor) {
                    maior_valor = matriz[i][j];
                    linha_maior = i;
                    coluna_maior = j;
                }
                if (matriz[i][j] < menor_valor) {
                    menor_valor = matriz[i][j];
                    linha_menor = i;
                    coluna_menor = j;
                }
            }
        }
    }
    
    for (int i = 0; i < 4; i += 2) {
        for (int j = 0; j < 4; j++) {
            soma_linhas_pares += matriz[i][j];
        }
    }
    
    for (int j = 0; j < 4; j++) {
        soma_linha_2 += matriz[2][j];
    }
    
    printf("Soma dos elementos das linhas pares: %d\n", soma_linhas_pares);
    printf("Primeiro elemento da matriz: %d\n", matriz[0][0]);
    printf("Ultimo elemento da matriz: %d\n", matriz[3][3]);
    printf("Soma dos elementos da linha 2: %d\n", soma_linha_2);
    
    printf("Elementos da diagonal principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
    
    printf("Maior valor: %d (posicao [%d][%d])\n", maior_valor, linha_maior, coluna_maior);
    printf("Menor valor: %d (posicao [%d][%d])\n", menor_valor, linha_menor, coluna_menor);
    
    return 0;
}