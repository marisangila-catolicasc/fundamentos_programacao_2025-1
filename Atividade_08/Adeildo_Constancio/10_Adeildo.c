#include <stdio.h>

int main() {
  int vetor[20], num;
  int cont = 0;

  for (int i = 0; i < 20; i++) {
    printf("Digite um numero para a casa do numero %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  
  printf("\n Digite o numero que deseja verificar:\n");
  scanf("%d", &num);
  
  for (int i = 0; i < 20; i++) {
    if (num == vetor[i]) {
      cont++;
    }
  }
  
  if (cont > 0) {
    printf("\n O numero %d apareceu %d vezes no vetor", num, cont);
  } else {
    printf("\n O numero %d nao esta no vetor!");
  }
  
  return 0;
}