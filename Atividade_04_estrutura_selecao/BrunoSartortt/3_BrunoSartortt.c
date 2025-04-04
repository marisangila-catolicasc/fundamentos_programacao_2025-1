#include <stdio.h>

int main() {
int quantidade;
float c_tot;


    printf("Qual o número de maçãs compradas?\n");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        c_tot = quantidade * 2.30;
    } else {
        c_tot = quantidade * 1.90;
    }

    printf("O valor total é: R$ %.2f\n", c_tot);

    return 0;
}
// Compilador: gcc 3_BrunoSartortt.c -o 3_BrunoSartortt.exe
// Executador: .\3_BrunoSartortt.exe