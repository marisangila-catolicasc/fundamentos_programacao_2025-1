#include <stdio.h> 



int main (void) { 



  int a, b, troca; 

  printf("Vamos trocar os Valores! "); 





  printf("\nDigite o valor A: "); 

  scanf(" %d", &a); 

  printf("\nDigite o valor B: "); 

  scanf("%d", &b); 



  troca = a; 

  a = b; 

  b = troca; 



  printf("\nO valor de A é:  %d", a); 

  printf("\nO valor de B é:  %d", b); 

} 