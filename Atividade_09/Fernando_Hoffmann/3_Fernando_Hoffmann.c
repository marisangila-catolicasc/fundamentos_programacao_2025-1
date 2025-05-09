#include <stdio.h>

int main() {
    int matriz[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite um numero para a posição [%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma_linhas_par = 0;
    for(int i = 0; i < 4; i += 2) {
        for(int j = 0; j < 4; j++) {
            soma_linhas_par += matriz[i][j];
        }
    }

    int primeiro_elemento = matriz[0][0];
    
    int ultimo_elemento = matriz[3][3];

    int soma_segunda_linha = 0;
        for(int j = 0; j < 4; j++) {
            soma_segunda_linha += matriz[1][j];
        }


    int maior_valor = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
            }
        }
    }

    int menor_valor = 1000000000;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if (matriz[i][j] < menor_valor) {
                menor_valor = matriz[i][j];
            }
        }
    }

    printf("\nMatriz:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
        
    printf("\n========== Resultados ==========\n\n");
    printf("Soma das linhas pares: %d\n", soma_linhas_par);
    printf("Valor do primeiro elemento da matriz: %d\n", matriz[0][0]);
    printf("Valor do último elemento da matriz: %d\n", matriz[3][3]);
    printf("Soma dos elementos da segunda linha: %d\n", soma_segunda_linha);
    printf("Elementos da diagonal principal: [%d] [%d] [%d] [%d]\n", matriz[0][0], matriz[1][1], matriz[2][2], matriz[3][3]);
    printf("Maior valor da matriz: %d\n", maior_valor);
    printf("Menor valor da matriz: %d\n", menor_valor);
    
    return 0;
}