#include <stdio.h>

int main() {

  int operation;

  printf("[1254] - Sanduba de Presunto - R$ 8,00\n");
  printf("[7114] - Suco de Laranja - R$ 5,00\n\n\n");
  printf("[5698] - Churros - R$ 3,00\n");

  printf("Digite o codigo: ");
  scanf("%d", &operation);

  switch (operation) {
  case 1254:
    printf("Sanduba de Presunto - R$ 8,00\n");
    break;
  case 5698:
    printf("Churros - R$ 3,00\n");
    break;
  case 7114:
    printf("Suco de Laranja - R$ 5,00\n");
    break;
  default:
    printf("Tentar novamente\n");
    break;
  }
  printf("O resultado é %d\n", operation);
  return 0;
}