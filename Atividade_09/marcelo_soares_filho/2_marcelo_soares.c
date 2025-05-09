/*
2. Faça um programa que peça os valores inteiros para uma matriz 3x3 e peça ao
usuario qual o numero da linha que ele deseja ver os valores e mostre na tela
somente os valores dessa linha.
*/    


#include <stdio.h>
int main() {
    int matriz[3][3];
    int i, j;
    int LINHA;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
        {
            printf("Digite a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            printf("\n");
        }
    }

    do{

        printf("\nDigite a linha que deseja os valores [0,1,2]: ");
        scanf("%d", &LINHA);    
        printf("\n");

    }while (LINHA < 0 || LINHA > 2);
      
        printf("\n---====================---\n");
        for (i = 0; i < 3; i++){
            printf("Linha (%d|%d): %d \n", LINHA, i, matriz[LINHA][i]);
    }

    return 0; 
}