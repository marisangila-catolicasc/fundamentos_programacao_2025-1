#include <stdlib.h>
#include <stdio.h>

/*
4. Fa¸ca um programau usando else if que pe¸ca dois n´umeros e mostre qual ´e o maior
deles. Se forem iguais, informar que s˜ao iguais.
*/

int main() {
  float num1, num2;
  
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);

  if (num1 > num2){
    printf("O primeiro e maior que o segundo");
  }
  else{
    printf("O segundo e maior que o primeiro");
  }
  
  return 0;
}
