#include <stdio.h>
const float pi = 3.14;
int main(void) {
  float volume, raio, altura;
  printf("Digite o valor do raio:\n ");
  scanf("%f", &raio);
  printf("Digite o valor da altura:\n");
  scanf(" %f", &altura);

 volume= pi*(raio*raio)*altura;
 
  printf("O valor do volume é: %.2f\n" , volume);
  
  
  return 0;
}
