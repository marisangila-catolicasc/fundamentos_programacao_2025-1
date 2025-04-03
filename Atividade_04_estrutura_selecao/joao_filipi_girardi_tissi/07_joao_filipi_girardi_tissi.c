#include <stdio.h>

int main(void) {
  int l1, l2, l3;

  printf("Insira os lados do triângulo: ");
  scanf("%d %d %d", &l1, &l2, &l3);

  if (l1 == l2 && l2 == l3) {
    printf("Triângulo equilátero");
  }
  else if (l1 == l2 || l2 == l3 || l1 == l3)
  {
    printf("Triângulo isósceles");
  }
  else if (l1 != l2 && l2 != l3 && l1 != l3)
  {
    printf("Triângulo escaleno");
  }
  
  return 0;
}