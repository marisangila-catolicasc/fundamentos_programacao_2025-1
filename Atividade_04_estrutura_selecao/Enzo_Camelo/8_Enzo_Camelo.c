#include <stdio.h>

int main() {
  int bisexto;
  
  printf("Digite um ano:\n");
  scanf("%d", &bisexto);
  
  if(bisexto % 4 == 0 && bisexto % 100 != 0 || bisexto % 400 == 0)
    printf ("É ano bissexto!\n");
  else
    printf ("Não é ano bissexto!\n");
}