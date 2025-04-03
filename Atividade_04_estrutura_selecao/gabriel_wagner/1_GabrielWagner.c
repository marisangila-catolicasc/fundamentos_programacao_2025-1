#include <stdio.h>

int main() {
    int numero;

    printf("Numero?\n");
    scanf("%d", &numero);

    if (numero >= 0) {
        printf("Eh positivo\n");
    } else {
        printf("Eh negativo\n");
    }

    return 0;
}
