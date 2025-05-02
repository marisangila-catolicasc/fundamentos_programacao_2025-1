#include <stdio.h>
int main() {

  int vetor[15];
  int i = 0, impares = 0;
 
  printf("Digite 15 números para colocar no vetor:\n");
  for (int i = 0; i < 15; i++) {
      scanf("%d", &vetor[i]);
         }      
  for (int i = 0; i < 15; i++) {
    if (vetor[i] % 2 != 0) {
      impares += vetor[i];
    } else {
        continue;
    }
  }
  printf("A soma dos números ímpares é: %d\n", impares);
return 0;
}
