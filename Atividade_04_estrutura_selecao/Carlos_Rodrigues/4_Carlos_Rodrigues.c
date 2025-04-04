#include <stdio.h>
int main(void) {
  
  int a, b;

  printf("Digite o numero da letra A: \n");
  scanf(" %d", &a);
  printf("Digite o numero B: \n");
  scanf(" %d", &b);

  if (a > b) {
    printf("O numero A eh maior que B.\n");
  }
  
  if (a == b) {
    printf("Os dois numeros sao iguais.\n");
  }
  
  if (b > a) {
    printf("O numero B eh maior que a letra A.\n");
  }
  return 0;
}
