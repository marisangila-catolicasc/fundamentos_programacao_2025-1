#include <stdio.h>
#include <stdlib.h>
int main() {
  int vetor[20] = {5,10,1,9,11,13,8,9,6,23,13,8,9,6,1,5,3,13,8,7};
  int escolha;
  int i=0;
  int cont=0;
  printf("Digite um numero: ");
  scanf("%d", &escolha);
  while (i < 20) {
   if (vetor[i] == escolha){
      cont++;
   }
    i++;
  }
  if(cont > 0){
    printf("O numero %d aparece %d vezes no vetor", escolha, cont);
  }else{
    printf("O numero %d nao aparece no vetor", escolha);
  }
  return 0;
}