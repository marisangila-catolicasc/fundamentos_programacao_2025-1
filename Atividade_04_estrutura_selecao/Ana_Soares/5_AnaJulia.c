#include <stdio.h>

int main(void) {
  int idade;

  printf("Digite sua idade: \n");
  scanf(" %d", &idade);

  if (idade < 18) {
    printf("Não eleitor");

  } else if (idade >=18 && idade <=65) {
  printf("Eleitor obrigatório");
  
  } else {
    printf("Eleitor facultativo");
  }

  return 0;
}