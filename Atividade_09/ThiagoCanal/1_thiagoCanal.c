#include <stdio.h>

int main(void){
    int matriz[2][3];
    int n, n2, soma = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um numero [%d][%d]: ", i, j);
            scanf("%d", &n);
            matriz[i][j] = n;
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }
    printf("Soma de todos os valores: %d", soma);
}