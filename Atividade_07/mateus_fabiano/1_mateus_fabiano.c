
#include <stdio.h>
int main() {
  int i1, i2 = 0;
  printf("Digite um numero:\n");
  scanf("%d", &i1);
  printf("Digite outro numero:\n");
  scanf("%d", &i2);

  do {
    printf("%d\n", i1);
    i1++;
  } while (i1 <= i2);

  return 0;
}
