#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;

  printf("Digite um numero:\n");
  scanf("%d", &a);

  printf("Digite outro numero:\n");
  scanf("%d", &b);

  c = a;
  a = b;
  b = c;

  printf("Os valores invertidos sao: %d e %d", a, b);
  
  return 0;
}