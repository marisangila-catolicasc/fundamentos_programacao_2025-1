#include <stdio.h>

int main() {
    int numero, maior;

    printf("Informe um número inteiro: ");
    scanf("%d", &numero);
    maior = numero;

    for (int i = 1; i < 10; i++) {
        printf("Informe um número inteiro: ");
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}
