#include <stdio.h>

int main() {
    int original[10], inverso[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &original[i]);
    }

    for (int i = 0; i < 10; i++) {
        inverso[i] = original[9 - i];
    }

    printf("Numeros inversos:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", inverso[i]);
    }
    printf("\n");

    return 0;
}
