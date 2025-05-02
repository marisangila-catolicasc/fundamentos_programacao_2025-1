#include <stdio.h>

int main(){

  int num1, num2;

  printf("Digite um numero inteiro: ");
  scanf("%d", & num1);
  printf("Digite um numero inteiro: ");
  scanf("%d", & num2);

  while (num1 != num2) {
    if (num1 > num2) {
      num2++;
    } else if (num2 > num1) {
      num2--;
    }
  }

  printf("O resultas devem ser iguais!");
  printf("Num 1! = %d", num1);
  printf("    Num 2! = %d", num2);
  return 0; 
} 