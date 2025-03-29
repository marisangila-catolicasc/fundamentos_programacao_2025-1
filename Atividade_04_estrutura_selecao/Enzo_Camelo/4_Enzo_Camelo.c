#include <stdio.h>

int main(void) {
  int num1, num2;
  
  printf("Digite o primeiro número:\n");
  scanf("%d", &num1);
  
  printf("Digite o segundo número:\n");
  scanf("%d", &num2);
  
  if(num1 > num2)
    printf ("%d é maior que %d\n", num1, num2);

  else if (num1 == num2)
    printf ("%d é igual a %d\n", num1, num2);

  else
    printf ("%d é maior que %d\n", num2, num1);
  return 0;
}