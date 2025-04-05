#include "stdio.h"
int main()
{
  char codigo;
  printf("[1] - 1254\n");
  printf("[2] - 5698\n");
  printf("[3] - 7114\n");
  printf("Qual é o código do produto?\n");
  scanf(" %c", &codigo);  
  switch (codigo)
  {
      case '1':
      printf("Sanduiche de Presunto - R$8,00\n");
      break;
    
      case '2':
      printf("Churros - R$3,50\n");
      break;
    
      case '3':
      printf("Suco de laranja que parece limao mas tem gosto de tamarindo - R$5,00\n");    
      break;

      default:
      printf("Opção inválida, tente novamente!\n");
  }

  return 0;
}