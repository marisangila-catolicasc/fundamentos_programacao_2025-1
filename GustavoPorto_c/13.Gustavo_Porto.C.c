#include <stdio.h>

int main() {
    int A, B, temp;

    printf("digite o valor de A: ");
    scanf("%d", &A);

    printf("digite o valor de B: ");
    scanf("%d", &B);

    temp = A;
    A = B;
    B = temp;

    printf("\nValores após a troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
