#include <stdio.h>  

#include <math.h> 



int num1, num2;  



int main(void) {  



  printf("Contas com esses dois números\n"); 



  printf("\nDigite o numero 1:  \n\n");  



  scanf(" %d", &num1);  



  printf("Digite o numero 2:  \n\n");  



  scanf(" %d", &num2);  



  printf("A soma deles é: %d\n\n", num1 + num2);  



  printf("A subtração deles é: %d\n\n", num1 - num2);  



  printf("A multiplicação deles é: %d\n\n", num1 * num2);  



  printf("A divisão deles é: %d\n\n", num1 / num2);  



  printf("Um elevado ao outro é: %.2lf\n\n", pow(num1, num2));  



  printf("A sobra deles é: %d\n\n", num1 % num2);  



  return 0;  



}  