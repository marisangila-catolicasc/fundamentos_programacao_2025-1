#include <stdio.h>
int main() {

  int vetor[20];
  int pares = 0;
      for (int i = 0; i < 20; i++) {
          printf("Digite 20 números numero: ");
          scanf("%d", &vetor[i]);
          if (vetor[i] % 2 == 0){
                   pares++;
         }      
}
      printf("Quantidade de numeros pares: %d\n", pares);
return 0;}
    
