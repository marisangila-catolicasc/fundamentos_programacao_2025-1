#include <stdio.h>
#include <math.h>

int main() {
  float F, C;

  printf("Escreva a temperatura em °F\n");
  scanf("%f", &F);

  C = 5 * (F-32) / 9;

  printf("%.2f °F equivalem a %.2f °C", F, C);
}