#include <stdio.h>

int main(void) {
  int num1, num2, num3;
  
  printf("Digite o primeiro número:\n");
  scanf("%d", &num1);
  
  printf("Digite o segundo número:\n");
  scanf("%d", &num2);
  
  printf("Digite o terceiro número:\n");
  scanf("%d", &num3);
  
  if(num1 > num2 && num1 > num3)
    printf ("%d é o maior número\n", num1);
  else if (num2 > num1 && num2 > num3)
    printf ("%d é o maior número\n", num2);
  else 
    printf ("%d é o maior número\n", num3);
}