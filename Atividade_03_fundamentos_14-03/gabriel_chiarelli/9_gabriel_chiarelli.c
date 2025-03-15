#include <stdio.h>
#include <math.h>
/*
 Desenvolva um programa que calcule o valor de venda de uma mercadoria. O
usu´ario dever´a informar seu valor de compra. O valor de venda ´e dado por: valor
de compra + 20% (representante) + 30% (impostos). Mostre o valor total de venda
dessa mercadoria. Os valores de 20% e 30% s˜ao calculados com base no valor de
compra.

*/
#define REP 0.2
#define IMP 0.3
int main() {
  float valorCompra, valorVenda;
  printf("Informe o valor de compra: ");
  scanf("%f", &valorCompra);
  valorVenda = valorCompra + (valorCompra * REP) + (valorCompra * IMP);
  printf("O valor de venda é: %.2f", valorVenda);

  return 0;
}