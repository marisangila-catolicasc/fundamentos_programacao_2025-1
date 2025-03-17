#include <stdio.h>
#include <math.h>
  int main() {
    int a, b, c;
   
    printf("digite um numero:\n" );
    scanf("%d", &a);
    
    b = a + 1;
    c = a - 1;

    printf("o antecessor é: %d\n", c);

    printf("o sucessor é: %d\n", b);
    return 0;
  }