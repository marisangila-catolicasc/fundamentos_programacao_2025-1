
#include <stdio.h>

int main() {
    int dados[10], i;

    for (i = 0; i < 10; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &dados[i]);
    }

    printf("Valores na ordem original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", dados[i]);
    }

    printf("\nValores na ordem reversa:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", dados[i]);
    }

    printf("\n");

    return 0;
}
