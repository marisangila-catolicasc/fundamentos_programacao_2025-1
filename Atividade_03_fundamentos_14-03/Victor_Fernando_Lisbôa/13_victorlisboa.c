#include <stdio.h>
#include <math.h>

int main() {
  int A, B, C;

  printf("Insira o primeiro valor\n");
  scanf("%d", &A);
  printf("Insira o segundo valor\n");
  scanf("%d", &B);

  printf("Valor A: %d\nValor B: %d\n", A, B);
    C = A;
    A = B;
    B = C;
  printf("\nValor A: %d\nValor B: %d", A, B);
}