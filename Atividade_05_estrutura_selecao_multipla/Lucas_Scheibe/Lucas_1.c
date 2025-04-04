#include <stdio.h>
#include <stdlib.h>

int main() {
  int code;
  
  printf("7114 - 5698 - 1254 \n");
  printf("Digite o codigo de produto: ");
  scanf("%d", &code);

  switch (code) {

  case 1254:
    printf("Sanduiche de presunto - R$8.00");
    break;
  case 5698:
    printf("Churros - R$3.50");
    break;
  case 7114:
    printf("Suco de laranja que parece de limão mas tem gosto de tamarindo - "
           "R$5.00");
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }
}