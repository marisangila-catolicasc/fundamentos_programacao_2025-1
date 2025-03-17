#include <stdio.h>
#include <math.h>
  int main() {
    float a, b, c;
   
    printf("digite o raio:\n" );
    scanf("%f", &a);

    printf("digite a altura:\n" );
    scanf("%f", &b);
    
    c = (3.14 * (a*a))  * b; 

    printf("a area é: %f\n", c);
    return 0;
  }