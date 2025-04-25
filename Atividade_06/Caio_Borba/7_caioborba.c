#include <stdio.h>

float media(int n);
int main(void) {
  int numbers;

  printf("Numeros: ");
  scanf("%d", &numbers);

  float media_final = media(numbers);
  printf("Media: %.2f", media_final);
}

float media(int n) {
  float numero, soma = 0;

  for (int i = 0; i < n; i++) {
    printf("Diga o N%d: ", i + 1);
    scanf("%f", &numero);

    soma += numero;
  }
  float media = soma / n;

  return media;
}
