#include <stdio.h>

int main(void) {
  int a, b, c, d;
  printf("Digite o A: \n");
  scanf("%d", &a);
  printf("Digite o B: \n");
  scanf("%d", &b);
  a = c;
  b = d;
  c = b;
  d = a;
  printf("A =  %d\n", a);
  printf("B =  %d\n", b);
 

  return 0;
}