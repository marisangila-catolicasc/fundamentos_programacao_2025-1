#include <stdio.h>
int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    }, somatorio = 0, soma_i_2 = 0, i = 0, j = 0, maior = 0, menor = 100, linha = 0, coluna = 0, linhab = 0, colunab = 0, lista[4];
 
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (i % 2 == 0){
                somatorio += matriz[i][j];
            }
        }
    }
    
    for (int j = 0; j < 4; j++){
            soma_i_2 += matriz[2][j];
    }
    while (matriz[i][j] <= 0){
        printf(" ");
        matriz[i][j]++;
        lista[i] += matriz[i][j];
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
            if (menor > matriz[i][j]){
                menor = matriz[i][j];
                linhab = i;
                colunab = j;
            }
        }
    }
    printf("Soma dos valores das linhas(i) pares da matriz %d", somatorio);
    printf("\n\nO primeiro valor da matriz e %d e o ultimo e %d", matriz[0][0], matriz[3][3]);
    printf("\n\nA soma dos valores da linha 2 e %d", soma_i_2);
    printf("\n\nOs valores da diagonal principal sao: ");
    for (int i = 0; i < 4; i++){
        printf("%d ", matriz[i][i]);
    }
    printf("\n\nO menor valor da matriz e %d na linha %d e coluna %d", menor, linha+1, coluna+1);
    printf("\n\nO maior valor da matriz e %d na linha %d e coluna %d", maior, linhab+1, colunab+1);
    return 0;
}