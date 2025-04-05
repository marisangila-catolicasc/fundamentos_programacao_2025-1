#include <stdio.h>
int main() {
  
  float num1, num2, resultado;
  char operacao;

  printf("Digite o primeiro número que voce deseja utilizar:\n");
  scanf("%f", &num1);

  printf("Digite o segundo número:\n");
  scanf("%f", &num2);

  printf("Escolha uma das operações matemáticas (+, -, * ou /):\n");
  printf("Use + para somar\n");
  printf("Use - para subtrair\n");
  printf("Use * para multiplicar\n");
  printf("Use / para dividir\n");
  
  scanf(" %c", &operacao);  

  if(operacao == '+') {
      resultado = num1 + num2;
      printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);}
    
    else if(operacao == '-') {
       resultado = num1 - num2;
      printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);}
  
  else if(operacao == '*') {
      resultado = num1 * num2;
      printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);}

  else if(operacao == '/') 
      if (num2 != 0) { 
        resultado = num1 / num2;
        printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);} 
      
      else {
        printf("Erro: Dividir por zero nao eh permitida.\n");}
    else { printf("Operacao invalida.\n");
         }
  return 0;} 
