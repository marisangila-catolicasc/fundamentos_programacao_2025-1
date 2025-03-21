#include <stdio.h>
#include <math.h>

int main(void) {
  int n1, n2, n3;
  printf("Insira o primeiro dígito:\n");
  scanf("%d", &n1);
  printf("Insira o segundo dígito:\n");
  scanf("%d", &n2);

  n3 = n1;
  n1 = n2;
  n2 = n3;

  printf("O primeiro número virou %d: \n", n1);
  printf("O segundo número virou %d:", n2);
  
  
  return 0;
}
