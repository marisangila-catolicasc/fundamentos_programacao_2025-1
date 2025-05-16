#include <stdio.h>

int verifica_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int numero;
    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    if (verifica_primo(numero))
        printf("o numero eh primo.\n");
    else
        printf("o numero nao eh primo.\n");

    return 0;
}
