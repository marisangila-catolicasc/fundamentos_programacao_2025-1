#include <stdio.h>

int main() {
    
    int matriz[4][4];
    int soma_par = 0;
    int soma_linha_2 = 0;
    
    printf("Digite os valores da matriz! \n");
    
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int maior = matriz[0][0];
    int menor = matriz[0][0];
    
    
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if (i%2==0) {
                soma_par += matriz[i][j];
            }
            if (i == 2) {
                soma_linha_2 += matriz[i][j];
            }
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    
    printf("A soma de todos o elementos das linhas pares eh igual a %d! \n", soma_par);
    printf("O primeiro valor da matriz eh %d e o ultimo eh %d! \n", matriz[0][0], matriz[3][3]);
    printf("A soma de todos o elementos da linha 2 eh igual a %d! \n", soma_linha_2);
    
    printf("Valores da diagonal principal: \n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if (i == j) {
                printf("Matriz[%d][%d]: %d! \n", i, j, matriz[i][j]);
            }
        }
    }
    
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if (maior == matriz[i][j]) {
                printf("%d eh o maior valor e esta na posicao matriz[%d][%d]! \n", maior, i, j);
                break;
            }
        }
    }
    
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if (menor == matriz[i][j]) {
                printf("%d eh o menor valor e esta na posicao matriz[%d][%d]! \n", menor, i, j);
                break;
            }
        }
    }

    return 0;
}
