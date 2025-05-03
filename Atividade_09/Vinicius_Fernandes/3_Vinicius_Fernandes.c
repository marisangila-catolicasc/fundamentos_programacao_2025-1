#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    int somaLinhaPar = 0;
    for(i = 0; i < 4; i += 2){
        for(j = 0; j < 4; j++){
            somaLinhaPar += matriz[i][j];
        }
    }
    int primeiro = matriz[0][0];
    int ultimo = matriz[3][3];
    int somaLinha2 = 0;
    for(j = 0; j < 4; j++){
        somaLinha2 += matriz[2][j];
    }
    printf("\nResultados:\n");
    printf("1. Soma linhas pares: %d\n", somaLinhaPar);
    printf("2. Primeiro: %d, Ultimo: %d\n", primeiro, ultimo);
    printf("3. Soma linha 2: %d\n", somaLinha2);
    
    printf("4. Diagonal Principal: ");
    for(i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }
    int max = matriz[0][0];
        int linha_max = 0, coluna_max = 0;
        int min = matriz[0][0];
        int linha_min = 0, coluna_min = 0;

        for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++) {
                if(matriz[i][j] > max) {
                    max = matriz[i][j];
                    linha_max = i;
                    coluna_max = j;
                }
                if(matriz[i][j] < min) {
                    min = matriz[i][j];
                    linha_min = i;
                    coluna_min = j;
                }
            }
        }

        printf("\n5. Maior valor: %d (posição [%d][%d])", max, linha_max, coluna_max);
        printf("\n6. Menor valor: %d (posição [%d][%d])\n", min, linha_min, coluna_min);

        return 0;
    }