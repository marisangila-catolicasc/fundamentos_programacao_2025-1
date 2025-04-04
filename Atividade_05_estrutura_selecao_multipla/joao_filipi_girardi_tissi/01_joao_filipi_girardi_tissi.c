#include <stdio.h>

int main(void) {
  int codigo;
  float valor;
  

  printf("Digite o código do item que você deseja, sendo: \n 1254 - Sanduíche de presunto \n 5698 - Churros \n 7114 - Suco \n");
  scanf("%d", &codigo);

  switch(codigo){
    case 1254:
      valor = 8;
      printf("Sanduíche de presunto - R$%.2f.", valor);
      break;
    case 5698:
      valor = 3.50;
      printf("Churros - R$%.2f.", valor);
      break;
    case 7114:
      valor = 2;
      printf("Suco de laranja que parece de limão mas tem gosto de tamarindo - %.2f", valor);
      break;
    default:
      printf("Código inválido. Digite um código válido.");
  }
  return 0;
}