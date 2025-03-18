#include <stdio.h>

int main() {
  int a, b, c;

  printf("Digite o primeiro número:\n");
  scanf("%d", &a);

  printf("Digite o segundo número:\n");
  scanf("%d", &b);

  c = a;
  a = b;
  b = c;
  
  printf("O primeiro número agora é: %.1d\n", a);
  printf("O segundo número agora é: %.1d\n", b);

  
  return 0;
}
