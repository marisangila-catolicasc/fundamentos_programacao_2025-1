#include <stdio.h>

int verifica_par_impar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (verifica_par_impar(numero))
        printf("O número é par.\n");
    else
        printf("O numero é impar.\n");

    return 0;
}
