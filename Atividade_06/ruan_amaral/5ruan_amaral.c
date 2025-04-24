#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("\nSoma dos primeiros 100 naturais = %d", soma);

    return 0;
}
