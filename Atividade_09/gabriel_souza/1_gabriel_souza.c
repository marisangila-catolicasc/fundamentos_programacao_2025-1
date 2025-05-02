#include <stdio.h>

/*
Fa ̧ca um programa que pe ̧ca os valores de uma matriz 2x3 e ao final, mostre na tela
o total da soma de todos os elementos dessa matriz.
*/

int main() {
    int matriz[2][3], soma = 0, i, j;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }
    printf("A soma de todos os elementos da matriz eh: %d", soma);
    
    return 0; 
}

