#include <stdio.h>

int main(void) {
int numero;
float menor12, maior12;
  printf("Insira a quantidade de maça: \n");
  scanf("%d", &numero);
  menor12 = numero * 2.30;
  maior12 = numero * 1.96;
  if(numero < 12){
    printf("Custo total= R$%.2f", menor12);
  }else{
    printf("Custo total= R$%.2f", maior12);
  }
  return 0;
}