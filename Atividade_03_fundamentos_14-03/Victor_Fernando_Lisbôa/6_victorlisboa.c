#include <stdio.h>
#include <math.h>

int main() {
  int a;
  
  printf("Digite um numero inteiro: \n");
  scanf("%d", &a);

  float antecessor = a - 1;
  float sucessor = a + 1;

  printf("O antecessor de %d eh %f\n e o sucessor eh %f", a, antecessor, sucessor);
}