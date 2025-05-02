#include <stdio.h>

int main() {
    int v[15], soma = 0;
    for (int i = 0; i < 15; i++) {
        scanf("%d", &v[i]);
        if (i % 2 == 1) soma += v[i];
    }
    printf("Soma nas posicoes impares: %d\n", soma);
    return 0;
}