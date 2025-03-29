#include <stdio.h>
#include <math.h>

int main(void) {
int num;

  printf("Digite um numero: \n");
    scanf("%d", &num);
  
  if (num % 2 == 0) {
// se o resto da divisão de num por 2 for igual a 0, o número é par
  
  printf("O numero eh par");
  
  }
      else
    printf("O numero eh impar");
  return 0;
}