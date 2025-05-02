#include <stdio.h>
int main() {
  int notas[5] = {5,10,1,8,3};
  int soma = 0;
  int media, maior = 0;
  for (int i = 0; i < 5; i++) {
  soma += notas[i];
  }
  media = soma / 5;
  printf("Média das notas: %d\n", media);
   for (int i = 0; i < 5; i++) {
      if(notas[i] > media){
         maior ++;
         printf("maior que a media: %d\n", notas[i]);
      }
     }
      printf("Quantidade de notas maiores que a média: %d\n", maior);
  return 0;
}