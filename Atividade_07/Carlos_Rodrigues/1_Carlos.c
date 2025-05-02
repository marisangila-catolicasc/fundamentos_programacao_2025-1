#include <stdio.h>

int main()
{
  int numero1, numero2;

    printf("Digite um número inteiro: ");
    scanf("%d", & numero1);
  
    printf("Digite outro número inteiro: ");
    scanf("%d", & numero2);

    while (numero1 != numero2) {
      if (numero1 < numero2) {
      numero1++;
      
    } else {
      numero1--; }
  
  }
      printf("Os números agora são iguais!\n");
      printf("\nO número 1 é = %d\n", numero1);
      printf("\nO número 2 é = %d", numero2);
  
  return 0; 
} 
