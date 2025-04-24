#include <stdio.h>

int main() {
    int limite, passo;

    printf("\nInforme o número limite: ");
    scanf("%d", &limite);

    printf("\nInforme o incremento: ");
    scanf("%d", &passo);

    if (passo <= 0) {
        printf("\nIncremento deve ser maior que zero.");
        return 1;
    }

    for (int i = 0; i <= limite; i += passo) {
        printf("\n%d", i);
    }

    return 0;
}
