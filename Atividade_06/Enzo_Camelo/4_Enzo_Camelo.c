#include <stdio.h>

int main(void) {
  int pares = 0, impares = 0, i, numero;
  
  for(i = 1; i <= 10; i++){
    
    printf("Digite o %d numero: ", i);
    scanf("%d", &numero);
    
    if(numero % 2 == 0)
      pares++;
      
    else
      impares++;
  }
  
  { printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números impares: %d\n", impares);
  }
}