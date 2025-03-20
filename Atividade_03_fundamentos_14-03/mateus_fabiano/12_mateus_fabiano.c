#include <math.h>
int main(){
  float div;
  int a, b, resto, soma, sub, mult, pot;

  printf("Digite o primeiro número: \n");
  scanf("%d", &a);

  printf("Digite outro número: \n");
  scanf("%d", &b);

  soma = a + b;
  sub = a - b;
  mult = a * b;
  div = (float)a / b;
  pot = pow(a, b);
  resto = a % b;

    printf("Os número inseridos foram %d e %d\nA soma entre os dois numeros e %d\nA subtracao entre os dois numeros e %d\nA multiplicacao entre os dois numeros e %d\nA divisao entre os dois numeros e %f\nA potenciacao entre os dois numeros e %d\nO resto da divisao entre os dois numeros e %d\n", a, b, soma, sub, mult, div, pot, resto);

  return 0;
  
  
}