#include <stdio.h>
#include <math.h>

int verifica_primo(int numero) {
    int i;
    if (numero <= 1) {
        return 0;
    }

    if (numero <= 3) {
        return 1;
    }
    if (numero % 2 == 0) {
        return 0;
    }

    int raiz = (int)sqrt(numero);
    for (i = 3; i <= raiz; i += 2) {
        if (numero % i == 0) {
            return 0;
    }

    return 1;
}

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (verifica_primo(num)) {
        printf("%d é primo.\n", num);
    } else {
        printf("%d não é primo.\n", num);
    }

    return 0;
}