#include <stdio.h>

int verifica_par_impar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (verifica_par_impar(num)) {
        printf("%d é par.\n", num);
    } else {
        printf("%d é ímpar.\n", num);
    }

    return 0;
}