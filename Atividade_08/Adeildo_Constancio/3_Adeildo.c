#include <stdio.h>

int main() {

  int nums[4] = {874, 589, 811, 956};
  float media;
  float soma = 0;

  for (int i = 0; i < 4; i++) {
    soma += nums[i];
  }

  media = soma / 4;

  printf("A media dos valores e: %.2f \n \n", media);

  for (int i = 0; i < 4; i++) {
    if (nums[i] > media) {
      printf("Numeros acima da media: %d \n", nums[i]);
    }
  }
  
  return 0;
}