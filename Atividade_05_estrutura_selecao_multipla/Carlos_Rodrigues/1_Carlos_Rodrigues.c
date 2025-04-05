#include <stdio.h>
int main()

  { int codigo;

  printf("Tabela de produtos\n");
  printf("1254 - Sanduiche de presunto - Valor eh de R$8,00\n");
  printf("5998 - Churros - Valor eh de R$3,50\n");
  printf("7114 - Suco de laranja que parece limao mas tem gosto de tamarindo - Valor eh de R$5,00\n");

  printf("\nDigite o codigo do seu produto:\n");
  scanf("%d", &codigo);

  switch(codigo)
  {
    case 1254:
    printf("\nO produto selecionado foi Sanduiche de presunto\n""\nValor: eh de R$8,00\n");
    break;
    
  case 5998:
      printf("\nO produto selecionado foi Churros\n" "\nValor:E de R$ 3,50\n");
      break;

  case 7114:
      printf("\nO produto selecionado foi Suco de laranja que parace limao mas tem gosto de tamarindo\n" "\nValor: eh de R$ 5,00\n");
        break;
    default:
    printf("\nCodigo invalido\n");
  }
      return 0;
  }
