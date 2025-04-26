#include <stdio.h>
int main() {
  float notas[5] = {0.1,10,9.9,7.7,8.8};
  float soma = 0.0;
  float media;
  for (int i = 0; i < 5; i++) {
  soma += notas[i];
  }
  media = soma / 5;
  printf("Média das notas: %.2f\n", media);
  return 0;
}