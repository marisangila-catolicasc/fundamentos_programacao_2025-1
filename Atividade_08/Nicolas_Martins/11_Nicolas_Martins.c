#include <stdio.h>

int main() {
    int nums[15], total = 0;
    int i;

    for (i = 0; i < 15; ++i) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (i = 1; i < 15; i += 2) {
        total += nums[i];
    }

    printf("\nO total dos elementos nas posições ímpares: %d\n", total);

    return 0;
}
