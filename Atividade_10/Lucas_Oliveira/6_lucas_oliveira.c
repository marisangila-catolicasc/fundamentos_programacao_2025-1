#include <stdio.h>
#include <string.h>
int verifica_par_impar(int num){
  if(num % 2 == 0)
    return 1;
  else
    return 0;
}
int main(void) {
  int num = 0;
  printf("Insira um numero: ");
  scanf("%d", &num);
  if(verifica_par_impar(num) == 1)
    printf("\nO numero eh par");
  else
    printf("\nO numero eh impar");

return 0;
}