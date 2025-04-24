#include <stdio.h>

int main() {
    double soma = 0.0, num;

    for (int i = 1; i <= 8; i++) {
        printf("\nInforme o %dº número: ", i);
        scanf("%lf", &num);
        soma += num;
    }

    printf("\nMédia = %.2f", soma / 8.0);

    return 0;
}
