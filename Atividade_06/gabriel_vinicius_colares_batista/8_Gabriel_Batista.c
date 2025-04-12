#include <stdio.h>
int main() {

  int num, maior = 0;
  for (int i = 0; i < 10; i++) {
    printf("Digite 10 números inteiros para saber qual é o maior:\n");
    scanf("%d", &num);
    if(num > maior){
      maior = num;
    };

  }
  printf("O maior número é: %d\n", maior);

  return 0;
}