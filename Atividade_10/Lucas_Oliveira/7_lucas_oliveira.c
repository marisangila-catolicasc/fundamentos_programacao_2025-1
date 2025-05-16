#include <stdio.h>
#include <string.h>
int verifica_primo(int num) {
  if (num < 2) 
    return 0;
  for (int i = 2; i * i <= num; i++){
    if (num % i == 0) 
      return 0;
  }
  return 1;
}

int main(void) {
  int num = 0;
  printf("Insira um numero: ");
  scanf("%d", &num);
  if(verifica_primo(num) == 1)
    printf("\nO numero eh primo");
  else
    printf("\nO numero nao eh primo");
  return 0;
}