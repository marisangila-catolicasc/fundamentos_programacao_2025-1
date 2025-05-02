#include <stdio.h>

int main() {
    int v[10], x, encontrado = 0;
    for (int i = 0; i < 10; i++) scanf("%d", &v[i]);
    scanf("%d", &x);
    for (int i = 0; i < 10; i++) {
        if (v[i] == x) {
            printf("Encontrado na posicao %d\n", i);
            encontrado = 1;
        }
    }
    if (!encontrado) printf("Nao encontrado\n");
    return 0;
}