#include <math.h>
int main(){
  float compra, venda;

  printf("Digite o valor de compra: \n");
  scanf("%f", &compra);

  venda = compra + (compra * 0.2) + (compra * 0.3);
    printf("O valor de venda é igual a: %.2f", venda);

  return 0;
}