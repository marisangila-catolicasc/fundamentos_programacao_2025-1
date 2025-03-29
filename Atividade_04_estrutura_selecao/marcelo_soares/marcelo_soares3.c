#include <stdio.h>
#include <math.h>

int main(void) {
int num;
char maca;
  
//As macas importadas custam R$ 2.30 cada se forem compradas menos de uma duzia, e R$ 1.95 se forem compradas uma duzia ou acima. Faca um programa que leia o nuumero de macas compradas, calcule e escreva o custo total da compra.

  printf("Digite o numero de maças compradas: ");
  scanf("%d", &num);
if (num < 12)
  printf("o valor total da compra é: %.2f reais" , num * 2.30);
else
  printf("o valor total da compra é: %.2f reais" , num * 1.95);
  
  return 0;
}