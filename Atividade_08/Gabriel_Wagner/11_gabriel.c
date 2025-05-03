#include <stdio.h>
int main() {
    int v[15], soma = 0;
    for (int i = 0; i < 15; i++) {
        scanf("%d", &v[i]);
        if (i % 2 != 0) soma += v[i];
    }
    printf("Soma dos elementos em posições ímpares: %d\n", soma);
    return 0;
}