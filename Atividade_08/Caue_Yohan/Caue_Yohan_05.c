#include <stdio.h>

int main() {
  int vetor1[5];
  int vetor2[5];
  int vetorsoma[5];
  printf("Digite os valores do primeiro vetor.\n");
   for (int i = 0; i <5; i++) {
    scanf("%d\n", &vetor1[i]);
  }  

  printf("Digite os valores do segundo vetor.\n");
   for (int i = 0; i <5; i++) {
    scanf("%d\n", &vetor2[i]);
     } 
  printf("A soma dos vetores são:\n");
  for (int i = 0; i <5; i++){
    vetorsoma[i] = vetor1[i] + vetor2[i];
    printf("%d\n", vetorsoma[i]);
    } 

   return 0;
}
