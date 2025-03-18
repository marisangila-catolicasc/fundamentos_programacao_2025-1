#include <stdio.h>

int main(){
int a, b;
float resultado;

printf("Digite o primeiro numero numero:\n" );
scanf("%d", &a);
printf("Digite o segundo numero:\n");
scanf("%d", &b);
resultado = a + b;

printf("o resultado da soma eh: %.2f\n", resultado);
  
return 0;

}