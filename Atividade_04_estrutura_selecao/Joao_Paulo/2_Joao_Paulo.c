#include <stdio.h>

int main() {
    int numero;

    printf("Numero?\n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Eh par\n");
    } else {
        printf("Eh impar\n");
    }

    return 0;
}
