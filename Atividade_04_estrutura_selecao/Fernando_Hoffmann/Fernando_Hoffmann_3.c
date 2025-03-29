#include <stdio.h>

int main(void) {
  int macas_compradas;
  float preco_maca;
  printf("Digite a quantidade de maçãs:\n");
  scanf("%d", &macas_compradas);
  if(macas_compradas >= 12)
    preco_maca = 1.95 * macas_compradas;
      
  else
    preco_maca = 2.30 * macas_compradas;
  printf("O preço total é: R$ %f :\n", preco_maca);
    
  return 0;
}