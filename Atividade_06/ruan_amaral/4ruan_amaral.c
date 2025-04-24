#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("\nInforme o %dº número: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("\nTotal de pares = %d", pares);
    printf("\nTotal de ímpares = %d", impares);

    return 0;
}
