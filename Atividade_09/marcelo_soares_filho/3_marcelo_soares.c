/*
3. Em uma matriz 4x4 preenchida com valores inteiros, mostre na tela:
• A soma de todos os elementos das linhas pares;
• O valor do primeiro elemento da matriz e do ´ultimo;
• A soma dos elementos da linha 2;
• Mostre somente os elementos da Diagonal Principal;
• O maior valor e sua posi¸c˜ao na matriz;
• O menor valor e sua posi¸c˜ao na matriz.
*/
#include <stdio.h>

int main() {
   int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
   }, i, j, soma = 0, maior = 0, menor = 0, posMaiorI = 0, posMaiorJ = 0, posMenorI = 0, posMenorJ = 0;

    printf("Matriz:{\n");
    for (i = 0; i < 4; i++){
        printf("    { ");
        for (j = 0; j < 4; j++){
            if (j == 3){
                printf("%d", matriz[i][j]);
            }else{
                printf("%d, ", matriz[i][j]);
            }
        }
        printf(" }\n");
    }
    printf("}\n");

    for (i = 0; i < 4; i++){
        if( i % 2 == 0){
            for (j = 0; j < 4; j++){
                soma += matriz[i][j];
            }
        }
    }

    printf("\nSoma dos elementos das linhas pares: %d", soma);
    printf("\nPrimeiro elemento: %d - Ultimo Elemento: %d", matriz[0][0], matriz[3][3]);
    printf("\nSoma dos elementos da linha 2: %d", matriz[1][0] + matriz[1][1] + matriz[1][2] + matriz[1][3]);
    printf("\nElementos da Diagonal Principal: %d, %d, %d, %d", matriz[0][0], matriz[1][1], matriz[2][2], matriz[3][3]);


    maior = matriz[0][0];
    menor = matriz[0][0];
    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                posMaiorI = i;
                posMaiorJ = j;
            } 
            if (matriz[i][j] < menor){
                menor = matriz[i][j];
                posMenorI = i;
                posMenorJ = j;
            }
        }
    }

    printf("\nMaior valor: %d - Posicao: [%d][%d]", maior, posMaiorI, posMaiorJ);
    printf("\nMenor valor: %d - Posicao: [%d][%d]", menor, posMenorI, posMenorJ);
    
    return 0; 
}