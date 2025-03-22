#include <stdio.h>
int main()   { 

 float investimento;
  float juros;
  juros = 0.05;
  float montante;
  int anos;
 
  printf("Informe o valor investido:\n");
  scanf("%f", &investimento);
  printf("Informe a quantidade de anos de investimento:\n");
  scanf("%i", &anos);
  
  montante = investimento + (investimento * juros * anos);
  
  printf("Após %i anos, o valor investido se tornou R$ %f", anos, montante);
  
  
  return 0;
} 