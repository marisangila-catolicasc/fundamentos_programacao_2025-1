#include <stdio.h>
#include <math.h>
  int main() {
    float a, b, c;
   
    printf("digite a quantia em dolar:\n" );
    scanf("%f", &a);

    printf("digite a cotação do real:\n" );
    scanf("%f", &b);
    
    c = a / b;

    printf("o valor em dolar é: %f\n", c);
    return 0;
  }