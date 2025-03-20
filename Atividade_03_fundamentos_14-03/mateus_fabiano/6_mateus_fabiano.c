#include <math.h>
int main(){
  int a, antecessor, sucessor;

  printf("Digite um número: \n");
  scanf("%d", &a);

  antecessor = a - 1;
  sucessor = a + 1;

    printf("O número digitado foi %d, seu sucessor é %d e seu antecessor é %d.", a, sucessor, antecessor);

  return 0;
}