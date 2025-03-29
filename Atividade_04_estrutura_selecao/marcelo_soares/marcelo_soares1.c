#include <stdio.h>
#include <math.h>

int main(void) {
int n;
  
  printf("Digite um numero: \n");
    scanf("%d", &n);
  if (n >= 0)
    printf("O numero e positivo");
      else
    printf("O numero e negativo");
  return 0;
}