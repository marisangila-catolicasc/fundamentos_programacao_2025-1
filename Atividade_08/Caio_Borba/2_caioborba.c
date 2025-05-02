#include <stdio.h>

int main() {
  int v[10] = {14, 88, 23, 6, 39, 57, 91, 30, 12, 75};
  int maior, menor;

  menor = v[0];
  maior = v[0];

  for (int i = 0; i < 10; i++) {

    if (v[i] > maior) {
      maior = v[i];

    } else if (v[i] < menor) {
      menor = v[i];
    }
  }
  printf("Maior: %d\n", maior);
  printf("Menor: %d\n", menor);
  return 0;
}