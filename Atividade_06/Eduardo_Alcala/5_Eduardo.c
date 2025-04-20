#include <stdio.h>

int main() {

  int soma = 1, valor = 0;

  for (int i = 1; i <= 100; i++) {

    valor = soma + i;
    soma = valor;
    if(i >= 2){ 
    printf("%d + %d = %d \n",i, valor - i, valor);
  } else {
    printf("%d + %d = %d \n",i, i, valor);
  }
  }
}