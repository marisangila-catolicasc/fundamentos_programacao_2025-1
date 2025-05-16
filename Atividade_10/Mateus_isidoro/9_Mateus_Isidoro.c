#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int soma_matriz(int matriz[5][5]){
    int soma = 0;
    for(int i = 0; i < 5; i++){
       for(int j = 0; j < 5; j++){
            soma += matriz[i][j];
       } 
    }
    printf("A soma dos numeros da matriz e: %d", soma);
    return 0;
}
int main(void){
    int matriz[5][5];
    printf("Digite os numeros \n");
    for(int i = 0; i < 5; i++){
       for(int j = 0; j < 5; j++){
            printf("linha[%d] coluna[%d]: ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
       } 
    }
    soma_matriz(matriz);
    return 0;
}