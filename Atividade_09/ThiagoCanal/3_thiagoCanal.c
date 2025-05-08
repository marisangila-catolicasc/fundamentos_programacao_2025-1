#include <stdio.h>
#include <stdlib.h>

int main(void){
    int my_array[4][4], n;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite um numero [%d][%d]: ", i, j);
            scanf("%d", &n);
            my_array[i][j] = n;
        }
    }

    system("cls");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(j == 3){
                printf("%d", my_array[i][j]);
            }else if(j == 0){
                printf("[%d]      %d, ", i, my_array[i][j]);
            }else{
                printf("%d, ", my_array[i][j]);
            }
        }
        printf("\n");
    }

    int soma_pares = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if((i % 2) == 0){
                soma_pares += my_array[i][j];
            }
        }
    }
    printf("Soma das linhas pares: %d\n", soma_pares);

    printf("Primeiro elemento: %d\n", my_array[0][0]);
    printf("Ultimo elemento: %d\n", my_array[3][3]);

    int soma_linha_dois = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == 2){
                soma_linha_dois += my_array[i][j];
            }
        }
    }
    printf("Soma da linha 2: %d\n", soma_linha_dois);

    int diagonal_princ[4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                diagonal_princ[i] = my_array[i][j];
            }
        }
    }

    printf("Diagonal principal: \n");
    for(int i = 0; i < 4; i++){
        if(i == 3){
            printf("%d", diagonal_princ[i]);
        }else{
            printf("%d, ", diagonal_princ[i]);
        }
    }

    int maior, posi_ma[2];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == 0){
                maior = my_array[i][j];
                posi_ma[0] = i;
                posi_ma[1] = j;
            }else{
                if(maior < my_array[i][j]){
                    maior = my_array[i][j];
                    posi_ma[0] = i;
                    posi_ma[1] = j;
                }
            }
        }
    }
    printf("\nMaior valor: %d ", maior);
    printf("Posicao na matriz: ");
    for(int i = 0; i < 2; i++){
        if(i == 1){
            printf("%d\n", posi_ma[i]);
        }else{
            printf("%d, ", posi_ma[i]);
        }
    }

    int menor, posi_me[2];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == 0){
                menor = my_array[i][j];
                posi_me[0] = i;
                posi_me[1] = j;
            }else{
                if(menor > my_array[i][j]){
                    menor = my_array[i][j];
                    posi_me[0] = i;
                    posi_me[1] = j;
                }
            }
        }
    }
    printf("Menor valor: %d ", menor);
    printf("Posicao na matriz: ");
    for(int i = 0; i < 2; i++){
        if(i == 1){
            printf("%d\n", posi_me[i]);
        }else{
            printf("%d, ", posi_me[i]);
        }
    }
}