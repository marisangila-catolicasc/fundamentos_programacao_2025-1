#include <stdio.h>

  int main() {
      float valorCom, valorVen, a, impos;
  
      printf("digite o valor da mercadoria: \n");
      scanf("%f", &valorCom);
    
      a = valorCom * 0.20;
      impos = valorCom * 0.30;
      valorVen = valorCom + a + impos;
    
      printf("O valor total com os impostos é: %.2f\n", valorVen);
      return 0;
  }