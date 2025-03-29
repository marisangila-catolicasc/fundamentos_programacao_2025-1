#include <stdio.h>
#include <math.h>

int main(void) {
int num1;
int num2;
int num3;
int maior;

printf( "digite o primeiro numero: ");
  scanf("%d", &num1);
  printf( "digite o segundo numero: ");
  scanf("%d", &num2);
  printf( "digite o terceiro numero: ");
  scanf("%d", &num3);

  maior = num1;
  if (num2 > maior) {
    maior = num2;
  }
  if (num3 > maior) {
    maior = num3;
  }
  printf("o maior numero é: %d\n", maior);
  
// 6. Faça um programa que peça tres numeros e diga qual o maior entre os tres
  
  return 0;
}