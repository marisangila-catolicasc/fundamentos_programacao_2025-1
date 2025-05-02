#include <stdio.h>

int main() {
  int num_vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, num;
  int confere = 0;

  printf("Digite um numero que deseja encontrar:\n");
  scanf("%d", &num);

  for (int i = 0; i < 10; i++) {
    if (num_vetor[i] == num) {
      printf("O numero %d esta presente na lista e se encontra na posicao %d", num, i);
      confere = 1;
    }
  }
    
  if (confere != 1) {
    printf("\nO numero nao esta presente na lista!");
  }

  return 0;
}