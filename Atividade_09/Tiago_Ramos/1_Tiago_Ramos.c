/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float tabela[2][3];
    float total = 0;

    printf("Vamos preencher uma tabela 2x3 com valores reais:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Informe o valor para a posicao (%d,%d): ", i, j);
            scanf("%f", &tabela[i][j]);
            
        }
    }
    
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {

            total += tabela[i][j];
        }
    }

    printf("\nSoma de todos os valores: %.2f\n", total);

    return 0;
}
