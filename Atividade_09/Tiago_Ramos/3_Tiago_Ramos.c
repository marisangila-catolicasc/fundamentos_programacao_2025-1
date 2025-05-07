/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int matriz[4][4];
    int total_linhas_pares = 0;
    int total_linha_dois = 0;

    printf("Insira os valores para a matriz 4x4:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior_valor = matriz[0][0];
    int menor_valor = matriz[0][0];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            if (i % 2 == 0) {
                total_linhas_pares += matriz[i][j];
            }

            if (i == 2) {
                total_linha_dois += matriz[i][j];
            }

            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
            }

            if (matriz[i][j] < menor_valor) {
                menor_valor = matriz[i][j];
            }
        }
    }

    printf("\nSoma dos elementos nas linhas pares: %d\n", total_linhas_pares);
    printf("Primeiro valor da matriz: %d | Último valor da matriz: %d\n", matriz[0][0], matriz[3][3]);
    printf("Soma dos elementos da linha 2: %d\n", total_linha_dois);

    printf("\nValores da diagonal principal:\n");
    for (int i = 0; i < 4; i++) {
        printf("Elemento na posicao (%d,%d): %d\n", i, i, matriz[i][i]);
    }


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == maior_valor) {
                printf("\nMaior valor encontrado: %d na posicao (%d,%d)\n", maior_valor, i, j);
                i = j = 4;
            }
        }
    }


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == menor_valor) {
                printf("Menor valor encontrado: %d na posicao (%d,%d)\n", menor_valor, i, j);
                i = j = 4;
            }
        }
    }

    return 0;
}



