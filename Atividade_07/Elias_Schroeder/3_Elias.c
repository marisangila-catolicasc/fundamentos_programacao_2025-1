#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));

  int aleatorio = rand() % 100 + 1;
  int n1;

  printf("Digite um numero de 0 a 100:\n");
  scanf("%d", &n1);

  while (n1 != aleatorio) {
    aleatorio = rand() % 100 + 1;
    printf("%d\n", aleatorio);
  }

  return 0;

  printf("%d\n", aleatorio);
}
