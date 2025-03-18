#include <stdio.h>

float inv;


int main(void) {

  printf("Digite o valor do seu investimento e verá seu lucro após 3 anos: \n\n");
  
  printf("Digite o valor do seu investimento: \n\n");
    scanf("%f", &inv);

  float jurosInv = (inv * 0.5) * 3;
  
  printf("O lucro do seu investimento após 3 anos é de: %.2f", jurosInv);

}
