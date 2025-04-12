#include <stdio.h>

int main() {
    int n, pares = 0, impares = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &n);
        (n % 2 == 0) ? pares++ : impares++;
    }
    printf("Pares: %d\nÍmpares: %d\n", pares, impares);
    return 0;
}


