#include <stdio.h>
int main(void) {
  int idade;
  float peso;
  char raca;
  printf("Digite a sua idade do seu pet:\n");
  scanf(" %d", &idade);
  
  printf("Digite o seu peso do seu pet:\n");
  scanf(" %f", &peso);
  
  printf("Digite a raça do seu animal de estimação, sendo G para gato e C para cachorro:\n");
  scanf(" %c", &raca);

  if (raca == 'C'){
  printf("A idade do seu animal é %d, o seu peso é %.2f e a raça dele é cachorro", idade, peso);
  }  else{
  printf("A idade do seu animal é %d, o seu peso é %.2fkg e a raça dele é gato", idade, peso);
  }

  
  return 0;
}
