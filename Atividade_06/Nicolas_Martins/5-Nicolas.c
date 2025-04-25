#include <stdio.h>

int main() {

  int somatoria = 0;

  for (int i = 0; i <= 100; i++)
    
  { somatoria += i; }
  printf("A somatoria dos numeros entre 1 e 100 eh: %d\n", somatoria);

  return 0;
}