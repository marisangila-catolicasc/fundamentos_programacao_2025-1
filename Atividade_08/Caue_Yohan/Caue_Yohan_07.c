#include <stdio.h>
int main() {

  int vetor[10], vetor2[10];
 
  printf("Digite 10 números para o vetor: ");
  for (int i = 0; i < 10; i++) {
      scanf("%d", &vetor[i]);
         }      

  for (int i = 0; i < 10; i++) {
    vetor2[i] = vetor[9 - i];
     }

  printf("Ordem inversa:\n" );
  for (int i =0; i < 10; i++)
      printf("%d\n", vetor2[i]);
return 0;
    }
