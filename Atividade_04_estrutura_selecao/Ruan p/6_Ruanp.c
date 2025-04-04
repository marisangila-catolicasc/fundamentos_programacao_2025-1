#include <stdio.h>

int main() {
    int N1, N2, N3;

    printf("Informe o primeiro número: ");
    scanf("%d", &N1);

    printf("Informe o segundo número: ");
    scanf("%d", &N2);

    printf("Informe o terceiro número: ");
    scanf("%d", &N3);

    if (N1 > N2 && N1 > N3) {
        printf("O maior número é: %d\n", N1);
    } else if (N2 > N1 && N2 > N3) {
        printf("O maior número é: %d\n", N2);
    } else if (N3 > N1 && N3 > N2) {
        printf("O maior número é: %d\n", N3);
    }

    return 0;
}
