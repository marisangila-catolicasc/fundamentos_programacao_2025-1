
#include <stdio.h>

int main() {
    int lista[15], i, resultado = 0;

    printf("Digite 15 números inteiros a seguir:\n");
    for (i = 0; i < 15; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    for (i = 1; i < 15; i += 2) {
        resultado += lista[i];
    }

    printf("Resultado da soma dos elementos nas posições ímpares: %d\n", resultado);

    return 0;
}
