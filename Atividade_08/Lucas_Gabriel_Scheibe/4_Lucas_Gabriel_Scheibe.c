#include <stdio.h>

int main() {
    int dados[10], i;

    for (i = 0; i < 10; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &dados[i]);
    }

    printf("Ordem original dos valores:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", dados[i]);
    }

    printf("\nOrdem inversa dos valores:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", dados[i]);
    }

    printf("\n");

    return 0;
}
