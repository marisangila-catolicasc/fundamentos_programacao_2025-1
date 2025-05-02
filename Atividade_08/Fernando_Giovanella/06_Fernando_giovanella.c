#include <stdio.h>

int main() {

  int vetor[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int par = 0;

  printf("Numeros pares: ");
  for(int i = 0; i < 20; i++){
    if(vetor[i] % 2 == 0){
      printf("%d ", vetor[i]);
      par++;
    }
  }

  printf("\nTotal de numeros pares: %d", par);

  return 0;
}