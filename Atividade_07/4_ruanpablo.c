#include <stdio.h>

int main() {
    int num, soma = 0;

    while (1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);
        if (num == 0) break;
        soma += num;
    }

    printf("Soma: %d\n", soma);
    return 0;
}