#include <stdio.h>

int main() {

  int num1, num2, temp;
  printf("Digite o primeiro número: ");
  scanf(" %d", &num1);
  printf("Digite o segundo número: ");
  scanf(" %d", &num2);
  temp = num1;
  num1 = num2;
  num2 = temp;
  printf("Agora o primeiro número é: %d\n", num1);
  printf("E o segundo número agora é: %d\n", num2);

  return 0;
}