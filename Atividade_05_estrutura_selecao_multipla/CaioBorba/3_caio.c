#include <stdio.h>

int main() {
  int a, b;
  float resultado;
  char operacao;

  printf("Solicite o primeiro numero: ");
  scanf("%d", &a);
  printf("Solicite o segundo numero: ");
  scanf("%d", &b);

  printf("[1] - Soma \n");
  printf("[2] - Subtracao \n");
  printf("[3] - Multiplicacao \n");
  printf("[4] - Divisao \n");
  printf("Digite a operacao desejada: ");
  scanf(" %c", &operacao);
  switch(operacao) {
    case 1: 
      printf("%d + %d = %d", a, b, a + b);
    break;

    case 2:
      printf("%d - %d = %d", a, b, a - b);
    break;

    case 3: 
      printf("%d * %d = %d", a, b, a * b);
    break;

    case 4:
      if(b == 0){
        printf("Não é possivel dividir por zero");
      } else {
        printf("%d / %d = %d", a, b, a / b);
        break;
      }
      
    
  }
}  
   