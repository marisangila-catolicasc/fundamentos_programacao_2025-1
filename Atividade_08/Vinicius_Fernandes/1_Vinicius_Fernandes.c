#include <stdio.h>
int main() {

  float numero[2], media;

  printf("Insira dois numeros:\n");

  for (int i = 0; i < 2; i++) {
    scanf("%f", &numero[i]);
  }
  media = (numero[0] + numero[1]) / 2;

  printf("Media dos numeros informados: %.2f", media);
}