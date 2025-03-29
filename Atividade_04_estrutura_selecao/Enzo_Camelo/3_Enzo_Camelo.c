#include <stdio.h>

int main(void) {
  int macas;
  float preco;
  
  printf("Digite a quantidade de maçãs:\n");
  scanf("%d", &macas);
  
  if(macas >= 12)
    preco = 1.95 * macas;
  else
    preco = 2.30 * macas;
  
  printf("O preço total é: R$ %.2f :\n", preco);

  return 0;
}