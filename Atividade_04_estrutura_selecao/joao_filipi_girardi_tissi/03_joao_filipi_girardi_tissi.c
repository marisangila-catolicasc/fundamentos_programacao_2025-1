#include <stdio.h>
int m, total;
int main() {
  printf("Insira o número de maçãs desejado: \n");
  scanf("%d", &m);

  if (m < 12){
    total = m * 2.30;
    printf("O valor total é: R$ %d", total);
  }
  else {
    total = m * 1.95;
    printf("O valor total é: R$ %d", total);
  }
  
  

  return 0;
}