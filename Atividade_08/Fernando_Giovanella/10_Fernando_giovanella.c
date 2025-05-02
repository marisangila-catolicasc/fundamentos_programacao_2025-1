#include <stdio.h>

int main() {
  int vetor[20], num;
  int contagem = 0;

  for (int i = 0; i < 20; i++) {
    printf("Digite um numero para a casa de numero %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  
  printf("\nDigite o numero que quer conferir:\n");
  scanf("%d", &num);
  
  for (int i = 0; i < 20; i++) {
    if (num == vetor[i]) {
      contagem++;
    }
  }
  
  if (contagem > 0) {
    printf("\nO numero %d apareceu %d vezes dentro do vetor", num, contagem);
  } else {
    printf("\nO numero nao esta no vetor!");
  }
  
  return 0;
}