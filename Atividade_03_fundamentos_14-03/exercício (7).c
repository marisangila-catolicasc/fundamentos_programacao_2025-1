#include <stdio.h>
int main(void)   { 

  float taxadecambio;
  float dolares;
  
  printf("Informe a cotação do dolar no dia de hoje\n");
 scanf("%f", &taxadecambio); 
  printf("Informe o valor de dolares que deseja converter\n");
  scanf("%f", &dolares);
  
  printf("\nO valor em reais é: %2f", dolares * taxadecambio);

  
  return 0;
} 