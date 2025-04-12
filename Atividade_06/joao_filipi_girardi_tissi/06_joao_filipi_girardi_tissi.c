#include <stdio.h>

int main() {
  int num = 0, inc = 0;
  printf("Insira um número:\n");
  scanf("%d", &num);
  printf("Insira o incremento:\n");
  scanf("%d", &inc);
  for (int i = 0; i <= num; i += inc)
    printf("%d\n", i);
  return 0;
}