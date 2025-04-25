#include <stdio.h>

int main() {
    int i, soma = 0;

    for(i = 1; i <= 100; i++) {
        soma = soma + i;
    }

    printf("A soma de todos os 100 primeiros numeros naturais e: %d\n", soma);

    return 0;
}
