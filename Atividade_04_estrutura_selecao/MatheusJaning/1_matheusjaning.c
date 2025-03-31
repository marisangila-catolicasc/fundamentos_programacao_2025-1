#include <stdio.h>

int main(void) {
int numero;
  printf("Insira um numero inteiro: \n");
  scanf("%d", &numero);
  if(numero >= 0){
    printf("O numero é positivo!");
  }else{
    printf("O numero é negativo");
  }
  return 0;
}