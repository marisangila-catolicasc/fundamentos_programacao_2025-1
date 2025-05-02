#include <stdio.h>

/*
Fa ̧ca um programa que pe ̧ca os valores inteiros para uma matriz 3x3 e pe ̧ca ao
usu ́ario qual o n ́umero da linha que ele deseja ver os valores e mostre na tela
somente os valores dessa linha.
*/

int main() {
    int matriz[3][3], i, j, linha;

    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Digite a posicao: [%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
            printf("\n");
        }
    }

    do{
        printf("\nDigite o numero da linha que deseja ver os valores (0, 1, 2): ");
        scanf("%d", &linha);    
        printf("\n");
    }while(linha < 0 || linha > 2);
    
    printf("\n---====================---\n");
    for (i = 0; i < 3; i++){
        printf("Linha (%d|%d): %d \n", linha, i, matriz[linha][i]);
    }
    
    
    return 0; 
}

