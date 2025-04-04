#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano (4 dígitos): ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Ano inválido.\n");
    } else if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("Ano bissexto.\n");
    } else {
        printf("Ano não bissexto.\n");
    }

    return 0;
}
