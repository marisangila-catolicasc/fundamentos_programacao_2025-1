#include <stdio.h>

int main(void) {
int numero;
  printf("Insira um numero inteiro: \n");
  scanf("%d", &numero);
  if((numero % 2) == 0){
    printf("O numero é par!");
  }else{
    printf("O numero é impar");
  }
  return 0;
}