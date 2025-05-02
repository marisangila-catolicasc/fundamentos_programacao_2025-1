#include <stdio.h>

int main() {

  int vetor[20] = {73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93};
  int par = 0;

  printf("Numeros pares: ");
  for(int i = 0; i < 20; i++){
    if(vetor[i] % 2 == 0){
      printf("%d ", vetor[i]);
      par++;
    }
  }

  printf("\n Total de numeros pares: %d", par);

  return 0;
} 