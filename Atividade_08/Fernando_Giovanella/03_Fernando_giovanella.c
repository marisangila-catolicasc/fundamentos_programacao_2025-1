#include <stdio.h>

int main() {

  int numeros[5] = {799, 876, 999, 878, 767};
  float media;
  float soma = 0;

  for (int i = 0; i < 5; i++) {
    soma += numeros[i];
  }
  media = soma / 5;

  printf("A media dos valores eh: %.2f\n\n", media);

  for (int i = 0; i < 5; i++) {
    if (numeros[i] > media) {
      printf("Numeros acima da media: %d\n", numeros[i]);
    }
  }
  
  return 0;
}