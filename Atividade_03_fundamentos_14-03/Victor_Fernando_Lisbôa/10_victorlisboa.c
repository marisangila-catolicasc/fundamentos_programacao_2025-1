#include <stdio.h>
#include <math.h>

int main() {
  float juros, din;
  int anos = 3;
  juros = 0.05;
    
  printf("Qual o valor a aplicação?\n");
  scanf("%f", &din);
    
  float tot = din + (din * juros * anos);
  
  printf("O resultado final do seu investimento será de: %.2f", tot);
  
}