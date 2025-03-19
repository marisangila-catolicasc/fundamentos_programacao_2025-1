#include "stdio.h"
#include "math.h"

int main(void) {
  int a, b, vazio; 

  printf("Insira o valor de A: \n");
  scanf("%d", &a);
  printf("Insira o valor de B: \n");
  scanf("%d", &b);

  vazio = a;
  a = b;
  b = vazio;

  printf("O valor de A é: %d \n", a);
  printf("O valor de B é: %d \n", b);
 
  return 0;
}
