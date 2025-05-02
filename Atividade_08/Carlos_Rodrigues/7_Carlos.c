#include <stdio.h>

int main() {
    
    int original[10], inverso[10];

    for (int x = 0; x < 10; x++) {
        printf("Digite o %d número: ", x + 1);
        scanf("%d", &original[x]);
    }

    for (int x = 0; x < 10; x++) {
        inverso[x] = original[9 - x];
    }

    printf("\nSequencia dos números inversos:\n");
    for (int x = 0; x < 10; x++) {
        printf("%d ", inverso[x]);
    }
    printf("\n");

    return 0;
}
