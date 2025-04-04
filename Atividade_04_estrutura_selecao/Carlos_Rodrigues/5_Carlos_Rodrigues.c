#include <stdio.h>
int main(void) {
  
  int idade;
  printf("Digite a sua idade\n");
  scanf(" %d", &idade);

  if (idade < 18) {
    printf("Não eleitor\n"); 
  } 
  else if (idade >=18 && idade <=65) {
    printf("Eleitor obrigatório\n");
  } 
  else {
    printf("Eleitor facultativo\n");
  }
  return 0;
}
