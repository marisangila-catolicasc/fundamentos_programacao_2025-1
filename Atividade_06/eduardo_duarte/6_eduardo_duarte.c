#include <stdio.h>

int main ()

{   int x = 0;
    int incremento;

  printf(" digite um numero inteiro: \n");
  scanf("%d", &x);
  printf("digite um incremento: \n");
  scanf("%d", &incremento);

  for (int i = 0; i <= x; i += incremento)
  {
    printf("o resultado da conta e: %d \n", i);
  }

    return 0;
}