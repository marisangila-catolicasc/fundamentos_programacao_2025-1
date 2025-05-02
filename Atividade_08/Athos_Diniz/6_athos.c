
#include <stdio.h>

int main() {
    int lista[20], i, pares = 0;

    printf("Digite 20 inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    for (i = 0; i < 20; i++) {
        if (lista[i] % 2 == 0) {
            pares++;
        }
    }

    printf("Total de pares encontrados: %d\n", pares);

    return 0;
}
