#include <stdio.h>
#define LINHA 2
#define COLUNA 3
 
/*
1. Faca um programa que peça os valores de uma matriz 2x3 e ao final, mostre na tela
o total da soma de todos os elementos dessa matriz.
*/
 
int main(){
    int matriz [2][3];
    int i, j;
    int soma = 0;

 
    for (i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Digite os valores: [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
        for(i = 0; i < 2; i++){
            for ( j = 0; j < 3; j++){
                soma += matriz[i][j];
            }
        }
        printf(" A soma total eh: %d\n", soma);
 
   

}