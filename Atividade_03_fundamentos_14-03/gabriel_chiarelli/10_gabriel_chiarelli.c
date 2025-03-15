#include <stdio.h>
#include <math.h>
/*
 Desenvolva um programa para calcular o valor final de um investimento de Maria
em um banco. O programa deve receber o valor investido e mostrar quanto dinheiro
ela ter´a ap´os 3 anos de investimento. Considere que o banco oferece uma taxa de
juros simples de 5% ao ano, e que a taxa n˜ao muda. valor f inal = valor inicial +
(valor inicial × taxa juros × anos)

*/
int main() {
  float valInicial, valFinal;
  int anos;
  printf("Digite o valor inicial: ");
  scanf("%f", &valInicial);
  printf("Digite o tempo de investimento em anos: ");
  scanf("%d", &anos);
  valFinal = valInicial * pow(1.05, anos);
  printf("O valor final do investimento é: %.2f", valFinal);
  

  return 0;
}