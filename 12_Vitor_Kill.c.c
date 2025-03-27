
#include <stdio.h>

int main(void) {
  int A, B, temp;
  
  printf("Digite o valor de A: ");
  scanf("%d", &A);
  
  printf("Digite o valor de B: ");
  scanf("%d", &B);
  
  printf("\nValores originais:\n");
  printf("A = %d\n", A);
  printf("B = %d\n", B);
  
  temp = A;
  A = B;
  B = temp;
  
  printf("\nValores trocados:\n");
  printf("A = %d\n", A);
  printf("B = %d\n", B);
  
  return 0;
}
