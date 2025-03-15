#include <stdio.h>

int main(void){

  float Valor1, Valor2;

  printf("Informe o valor de A: ");
  scanf("%f", &Valor1);

  printf("Informe o valor de B: ");
  scanf("%f", &Valor2);

  printf("\nInvertendo valores...\n\n");
  printf("O valor de 'A' passa a ser: (%.2f) e o valor de 'B' passa a ser (%.2f)", Valor2, Valor1);
  printf(" pois os valores foram invertidos!");
  
  return 0;
}