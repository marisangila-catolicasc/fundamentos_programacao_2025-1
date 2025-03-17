#include <stdio.h>
#include <math.h>

int main() {
  int x, y;

  printf("Digite o primeiro numero\n");
  scanf("%d", &x);
  printf("Digite o segundo numero\n");
  scanf("%d", &y);

  float som = x + y;
  float sub = x - y;
  float mul = x * y;
  float div = x / y;
  float exp = pow(x, y);
  float res = x % y;

  printf("Dado os valores, a soma deles: %.2f\n a subtração: %.2f\n a multiplicação: %.2f\n a divisão: %.2f\n a exponenciação: %.2f\n o resto da divisão: %.2f\n", som, sub, mul, div, exp, res);


}