#include <stdio.h>

int verifica_par_impar(int numero) {
    if (numero % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int valor = 10;

    if (verifica_par_impar(valor) == 1) {
        printf("o numero %d eh par\n", valor);
    } else {
        printf("o numero %d eh impar\n", valor);
    }

    return 0;
}

