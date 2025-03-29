#include <stdio.h>

int main() {
  int idade; 
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  
  if (idade >= 18 && idade <= 65) {
    printf("Eleitor Obrigatorio", idade);
  } else if (idade <= 17) {
    printf("Não Eleitor", idade);
  } else {
    printf("Eleitor Facultativo", idade);
  }

  return 0;
}
