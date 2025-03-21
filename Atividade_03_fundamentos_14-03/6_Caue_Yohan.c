#include <stdio.h>
int main(void) {
  int n1,antecessor, sucessor;
  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  antecessor = n1 - 1;
  sucessor = n1 + 1;
  
  printf("O antecessor do número é: %d\n" , antecessor);
  printf("O sucessor do número é: %d\n" , sucessor);

  
  return 0;
}
