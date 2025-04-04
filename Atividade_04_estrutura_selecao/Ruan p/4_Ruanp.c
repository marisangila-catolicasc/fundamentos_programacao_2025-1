#include <stdio.h>

int main() {
    int N1, N2;

    printf("Informe um número: ");
    scanf("%d", &N1);

    printf("Informe outro número: ");
    scanf("%d", &N2);

    if (N1 > N2) {
        printf("O maior número é: %d\n", N1);
    } else if (N2 > N1) {
        printf("O maior número é: %d\n", N2);
    } else {
        printf("Os números são iguais!\n");
    }

    return 0;
}
