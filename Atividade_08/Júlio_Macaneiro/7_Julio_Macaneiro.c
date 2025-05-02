#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    printf("Insira 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nOs Valores na ordem inversa:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
