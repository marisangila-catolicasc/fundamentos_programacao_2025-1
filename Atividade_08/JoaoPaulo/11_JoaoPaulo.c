#include <stdio.h>

int main() {
  int vetor[15] = {5,10,1,9,11,13,8,9,6,23,13,8,9,6,7};
  int i = 0;
  int soma = 0;
  while (i < 15) {
   if (0 != 2%vetor[i] ){
      soma+=vetor[i];
   }
    i++;
  }
  printf("A soma dos numeros impares e: %d\n", soma);
  return 0;
}