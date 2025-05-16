#include <stdio.h>

int verifica_par_impar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

int main() {
    int numero;
    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    if (verifica_par_impar(numero))
        printf("o numero eh par.\n");
    else
        printf("o numero eh impar.\n");

    return 0;
}
