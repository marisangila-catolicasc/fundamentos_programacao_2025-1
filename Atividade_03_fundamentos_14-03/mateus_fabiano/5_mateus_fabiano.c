#include <math.h>
int main(){
  int a, b;
  float resultado;

  printf("Digite um número: \n");
  scanf("%d", &a);

  printf("Digite outro número: \n");
  scanf("%d", &b);

  resultado = a + b;

    printf("A soma dos dois números é: %.2f", resultado);

  return 0;
}