#include <stdio.h>
int main(void)   { 

  int numero;
  printf("Digite um número inteiro\n");
  scanf("%d", &numero);
  printf("O antessesor é %d e o sucessor %d", numero-1, numero+1);
  
return 0;
} 