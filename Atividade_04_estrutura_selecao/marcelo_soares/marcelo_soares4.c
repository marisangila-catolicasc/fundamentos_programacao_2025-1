#include <stdio.h>
#include <math.h>

int main(void) {
int num1;
int num2;

// 4. Faça um programa usando else e if que peça dois numeros e mostre qual é o maior deles Se forem iguais, informar que são iguais.

printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  if (num1 > num2)
  printf( "O %d é maior que o %d", num1, num2);
   else if (num1 < num2)
    printf( "O %d é maior que o %d", num2, num1);
  else
  printf( "Os numeros são iguais");
  
  return 0;
}