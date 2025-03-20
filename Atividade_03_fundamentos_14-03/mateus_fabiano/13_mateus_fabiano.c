#include <math.h>
int main(){
  int a, b, aux;

  printf("Digite o valor de A: \n");
  scanf("%d", &a);

  printf("Digite o valor de B: \n");
  scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;
      printf("O valor de A apos a troca e %d\nO valor de B apos a troca e %d", a , b);

  return 0;
    
}
