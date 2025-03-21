#include <stdio.h>
#include <math.h>

int main() {
  int temp_f;
  int temp_c;

  printf("Quantos Farhenheit esta fazendo agora?\n");
  scanf("%d", &temp_f);

  temp_c = 5 * (temp_f - 32) / 9;

  printf("Esta fazendo %d graus Celcius\n", temp_c);
  
  
  return 0;
}