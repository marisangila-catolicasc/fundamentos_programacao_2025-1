#include <stdio.h>

int main() {
  int codigo;
  printf("Insira o codigo do produto desejado:\n");
  scanf("%d", &codigo);
  
  switch (codigo)
    {
  case 1254:
    printf("Sanduiche de Presunto - R$ 8.00\n");
    break;
      
  case 5698:
    printf("Churros - R$ 3.50\n");
    break;
      
  case 7114:
    printf("Suco de limão que parece de limão mas tem gosto de tamarindo - R$ 5.00\n");
    break;

    default:
      printf("Codigo invalido\n");
      break;
    }

  return 0;
}