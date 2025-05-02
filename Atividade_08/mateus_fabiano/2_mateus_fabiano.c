#include <stdio.h>

int main() {
    int valor[5] = {5, 10, 1, 8, 3};
    int maior = valor[0];
    int menor = valor[0];

    for (int i = 1; i < 5; i++) {
        if (valor[i] > maior) {
            maior = valor[i];
        }
        if (valor[i] < menor) {
            menor = valor[i];
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}