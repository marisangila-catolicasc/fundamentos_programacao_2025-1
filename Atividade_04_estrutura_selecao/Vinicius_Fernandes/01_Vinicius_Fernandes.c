#include <stdio.h>

int main(void) {
  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  if(numero > 0){
    printf("O número é positivo");
  }else{
    printf("O número é negativo");
  }
    
  return 0;
}