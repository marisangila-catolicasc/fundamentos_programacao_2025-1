#include <stdio.h>
int main(void) {
  
  int num1, num2, num3;
  
  printf("Digite o número 1:\n");
  scanf(" %d", &num1);
  
  printf("Digite o número 2:\n");
  scanf(" %d", &num2);
  
  printf("Digite o número 3:\n");
  scanf(" %d", &num3);

  if (num1 > num2 && num1 > num3) {
    printf("Número 1 é o maior/n");
  
  } else if (num2 > num1 && num2 > num3) {
    printf("Número 2 é o maior\n");
  
  } else {
    printf("Número 3 é o maior\n");
  }
  return 0;
}
