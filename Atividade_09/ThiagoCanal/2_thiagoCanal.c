#include <stdio.h>

int main(void){
    int tresportres[3][3], n;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um numero [%d][%d]: ", i, j);
            scanf("%d", &n);
            tresportres[i][j] = n;
        }
    }

    int linha;

    printf("Numero da linha: ");
    scanf("%d", &linha);

    for(int j = 0; j < 3; j++){
        if(j == 3 - 1){
            printf("%d", tresportres[linha][j]);
        }else{
            printf("%d, ", tresportres[linha][j]);
        }
    }
}