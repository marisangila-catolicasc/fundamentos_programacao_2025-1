#include <stdio.h>

int main() {
  int a;
  
printf("Digite um número:\n");
  scanf("%d", &a);

  printf("O antecessor do seu número é:" "%d", a-1);
  printf("\nO sucessor do seu número é:" "%d", a+1);
  return 0;
}
