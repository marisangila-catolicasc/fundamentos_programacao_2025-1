#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[4][4];
    int soma_par = 0, soma2;
    int menor = 99999999, maior = -9999999;
    int pos_menor_l, pos_menor_c, pos_maior_l, pos_maior_c;


    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("Digite o numero para a posicao [%d][%d]\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            if (i % 2 == 0){
                soma_par += matriz[i][j];
            }

            if (i == 1)
                soma2 += matriz[i][j];

            if (matriz[i][j] < menor){
                menor = matriz[i][j];
                pos_menor_l = i;
                pos_menor_c = j;
            }

            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                pos_maior_l = i;
                pos_maior_c = j;
            }   
        }       
    }

    printf("\nA matriz ficou assim:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            printf("[ %d ]", matriz[i][j]);
        printf("\n");
    }

    printf("\nA soma das linhas pares eh: %d\n", soma_par);
    printf("O primeiro elemento eh: %d\n", matriz[0][0]);
    printf("O ultimo elemento eh: %d\n", matriz[3][3]);
    printf("A soma da segunda linha eh: %d\n", soma2);
    printf("A diagonal principal eh: ");
    for (int i = 0; i < 4; i++) {
        printf("%d", matriz[i][i]);

    }

    printf("\nO maior valor eh %d na posicao [%d][%d]\n", maior, pos_maior_l + 1, pos_maior_c + 1);
    printf("O menor valor eh %d na posicao [%d][%d]\n", menor, pos_menor_l + 1, pos_menor_c + 1);

    system("\npause");
return 0;
}