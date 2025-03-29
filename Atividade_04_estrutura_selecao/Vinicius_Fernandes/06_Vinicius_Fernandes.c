#include <stdio.h>

int main(void) {
  int n1, n2, n3;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);
  printf("Digite o segundo número: ");
  scanf("%d", &n2);
  printf("Digite o terceiro número: ");
  scanf("%d", &n3);

  if(n1 > n2 && n1 > n3){
    printf("O maior número é: %d", n1);
  }else if(n2 > n1 && n2 > n3){
    printf("O maior número é: %d", n2);
  }else if(n3 > n1 && n3 > n2){
    printf("O maior número é: %d", n3);
  }
    return 0;
}