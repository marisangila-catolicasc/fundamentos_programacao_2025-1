#include <stdio.h>
int main() {
    int numeros[4];
    int i, maior = 0;
    for (i = 0; i < 4; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    printf("O maior numero e %d", maior);

    return 0;
}