
#include <stdio.h>

int main(void) {
  int numero;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);
  
  printf("O numero informado foi %d, o antecessor e %d e o sucessor e %d.\n", 
         numero, numero - 1, numero + 1);
  
  return 0;
}
