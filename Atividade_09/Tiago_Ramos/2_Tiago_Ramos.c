/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int matriz[3][3];
    int escolha;

    printf("Preencha os valores da matriz 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Informe o valor na posicao [%d][%d]: ", i, j);
            scanf("%d", &quadro[i][j]);
        }
    }

    printf("\nQual linha voce quer visualizar (0, 1 ou 2)? ");
    scanf("%d", &escolha);

    printf("\nValores da linha %d:\n", escolha);
    for (int i = 0; i < 3; i++) {
        printf("Elemento [%d][%d] = %d\n", escolha, i, quadro[escolha][i]);
    }

    return 0;
}

