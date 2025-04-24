#include <stdio.h>

int main() {
    int numero, a = 0;

    for (int i = 0; i <= 10; i++) {
        printf("\n%d - Digite um número: ", i);
        scanf("%d", &numero);

        if (numero > a) {
            a = numero;
        }
    }

    printf("\nMaior número: %d", a);

    return 0;
}
