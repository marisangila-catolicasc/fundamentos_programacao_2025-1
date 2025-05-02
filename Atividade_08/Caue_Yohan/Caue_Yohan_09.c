#include <stdio.h>
int main() {

  int vetor[5], vetor2[5], vetor3[10];
  int i = 0;
 
  printf("Digite 5 números para o primeiro vetor:\n");
  for (int i = 0; i < 5; i++) {
      scanf("%d", &vetor[i]);
         }      
  printf("Digite 5 números para o segundo vetor:\n");
  for (int i = 0; i < 5; i++) {
      scanf("%d", &vetor2[i]);
         }      
  for (int i = 0, h = 0; i < 5; i++) {
    vetor3[h++] = vetor[i];
    vetor3[h++] = vetor2[i];
  }
  for (int i = 0; i < 10; i++) {
    printf("%d ", vetor3[i]);
  }
return 0;
}
