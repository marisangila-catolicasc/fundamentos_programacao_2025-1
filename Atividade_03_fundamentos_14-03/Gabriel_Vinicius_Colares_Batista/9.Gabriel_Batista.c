#include <stdio.h>

float compra;
float jurosR; //20% de juros
float jurosI; // 50% de juros


int main(void) {
  
  printf("Digite o valor da sua compra: \n");
    scanf("%f", &compra);

  float jurosR = compra * 0.2;
  float jurosI = compra * 0.5;
  
  printf("O valor da sua compra com os juros são: %f", compra + jurosI + jurosR);

}
