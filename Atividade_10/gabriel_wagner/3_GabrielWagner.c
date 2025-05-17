#include <stdio.h>

int main() {
    int quantidade;
    float total;

    printf("Quantas maca?\n");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        total = quantidade * 2.30;
    } else {
        total = quantidade * 1.95;
    }

    printf("Total: %.2f\n", total);
    return 0;
}
