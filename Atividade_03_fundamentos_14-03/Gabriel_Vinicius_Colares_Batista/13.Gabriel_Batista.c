#include <stdio.h>

int main() {
    int A, B, temp;
  
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
  
    temp = A;
    A = B;
    B = temp;

    printf("Após a troca:\n");
    printf("Valor de A: %d\n", A);
    printf("Valor de B: %d\n", B);

    return 0;
}
