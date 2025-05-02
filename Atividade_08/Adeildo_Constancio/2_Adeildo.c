#include <stdio.h>

int main(){

  int n[5] = {73, 237, 84, 773, 8};
  int maior = n[0], menor = n[0];

  for (int i = 0; i < 5; i++){
    if(n[i] > maior){
      maior = n[i];
    } else if (n[i] < menor){
      menor = n[i];
    }
  }

  printf("O maior numero e: %d \n", maior);
  printf("O menor numero e: %d \n", menor);
  return 0;
}