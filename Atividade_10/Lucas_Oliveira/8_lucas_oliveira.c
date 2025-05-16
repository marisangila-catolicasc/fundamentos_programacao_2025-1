#include <stdio.h>
#include <string.h>
int verifica_vetores_iguais(int *vetor, int *vetorB){
  int iguais = 0, tamanho = 0;
  for (int i = 0; i < 3; i++){
    tamanho++;
    if(vetor[i] == vetorB[i])
      iguais++;
  }
  if (tamanho == iguais)
    return 1;
  else  
    return 0;
}

int main(void) {
  int vetor[3], vetorB[3];
  printf("Digite os elementos do primeiro vetor:\n");
  for (int i = 0; i < 3; i++) {
    printf("%dº numero do vetor: ", i+1);
    scanf("%d", &vetor[i]);
  }
  printf("Digite os elementos do segundo vetor:\n");
  for (int i = 0; i < 3; i++) {
    printf("%dº numero do vetor: ", i+1);
    scanf("%d", &vetorB[i]);
  }
    
  if(verifica_vetores_iguais(vetor, vetorB) == 1)
    printf("\nOs vetores sao iguais");
  else
    printf("\nOs vetores nao sao iguais");
  return 0;

}