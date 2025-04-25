#include <stdio.h>

int main() {
    int soma = 0;

    for (int contador = 1; contador <= 100; contador++) {
        soma = soma + contador;
    }

    printf("Soma dos 100 primeiros números naturais: %d\n", soma);
    return 0;
}