#include <stdio.h>

int verifica_primo(int numero) {
    if (numero < 2) {
        return 0;
    }

    int i = 2;
    while (i * i <= numero) {
        if (numero % i == 0) {
            return 0; 
        }
        i++;
    }

    return 1; 
}

int main() {
    int valor = 7;

    if (verifica_primo(valor) == 1) {
        printf("o numero %d eh primo\n", valor);
    } else {
        printf("o numero %d nao eh primo\n", valor);
    }

    return 0;
}

