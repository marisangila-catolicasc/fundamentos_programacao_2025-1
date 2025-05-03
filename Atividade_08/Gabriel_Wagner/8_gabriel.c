#include <stdio.h>
int main() {
    int v[10], num, achou = 0;
    for (int i = 0; i < 10; i++) scanf("%d", &v[i]);
    printf("Número a buscar: ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++) {
        if (v[i] == num) {
            printf("Número encontrado na posição %d\n", i);
            achou = 1;
        }
    }
    if (!achou) printf("Número não encontrado\n");
    return 0;
}