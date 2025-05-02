#include <stdio.h>

int main(){

  int num[5] = {1, 123, 432, 2, 32};
  int maior = num[0], menor = num[0];

  for (int i = 0; i < 5; i++){
    if(num[i] > maior){
      maior = num[i];
    } else if (num[i] < menor){
      menor = num[i];
    }
  }

  printf("O maior numero eh: %d\n", maior);
  printf("O menor numero eh: %d\n", menor);
  return 0;
}