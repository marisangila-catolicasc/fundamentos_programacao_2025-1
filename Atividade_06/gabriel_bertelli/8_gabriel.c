#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, maior;

    printf("Digite o 1º numero: ");
    scanf("%d", &numero);
    maior = numero;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior numero informado foi: %d\n", maior);

    return 0;
}
