#include <stdio.h>

int main(void) {
  int codigo;

  printf("1254\n");
  printf("5698\n");
  printf("7114\n");
  printf("Digite o código do produto: ");
  scanf("%d", &codigo);

  switch (codigo)
    {
      case 1254:
        printf("Sanduíche de presunto - R$ 8,00\n");
        break;
      case 5698:
        printf("Churros - R$ 3,50\n");
        break;
      case 7114:
        printf("Suco de laranja que parece de limão mas tem gosto de tamarindo - R$ 5,00\n");
        break;
      default:
        printf("Código inválido\n");
        break;
    }
    return 0;
}