#include <stdio.h>

int soma_matriz(int mat[3][3]){
    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
             soma += mat[i][j];
        }
    }
return soma;
}

int main(){

    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Informe o numero da posicao [%d][%d]", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }  
    }
int resultado = soma_matriz(mat);
    printf("O resultado da soma eh %d\n", resultado);

    return 0;    

}