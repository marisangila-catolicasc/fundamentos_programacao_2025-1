#include <stdio.h>

int main() {
  float valorIni, valorFin;

  printf("Digite o valor inicial do investimento:\n");
  scanf("%f", &valorIni);

  valorFin = valorIni + (valorIni * 0.05 * 3);

  printf("O valor final do seu investimento é %.2f", valorFin);
  return 0;
}
