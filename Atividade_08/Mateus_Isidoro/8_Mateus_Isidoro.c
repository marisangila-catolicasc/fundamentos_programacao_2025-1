#include <stdio.h>
int main() {
  int vetor[10] = {5,10,1,8,3,6,9,4,7,8};
   int numero;
   int validador = 0;
   printf("digite um numero: \n");
   scanf("%d", &numero);
  for (int i = 0; i < 10; i++) {
    if(vetor[i] == numero){
      validador = 1;
      printf("o numero esta no vetor ");
      printf("o numero esta na posicao %d\n", i);
    }
  }
   if(validador != 1){
      printf("nao encontrado");
   }
  return 0;
}