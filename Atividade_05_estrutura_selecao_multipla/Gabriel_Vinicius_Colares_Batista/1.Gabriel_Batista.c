#include <stdio.h>

int main(void) {
  int codProduto;

  printf("Digite o Código do produto:\n");
  scanf("%d", &codProduto);

switch (codProduto) {
  case 1254:
    printf("Sanduíche de presunto - R$8,00\n");
    break;
  case 5698:
    printf("Churros - R$3,50\n");
    break;
  case 7114:
    printf("Suco de laranja que parece de limão mas tem gosto de tamarindo -R$5,00\n");
    break;
}
  
  return 0;
}