#include <stdio.h>

int main(void){
  int operacao;

  printf("1 - soma\n");
  printf("2 - subtracao\n");
  printf("3 - multiplicacao\n");
  printf("4 - divisao\n");

  printf("Operacao: ");
  scanf("%d", &operacao);

  int n1, n2;

  printf("Insira dois numeros inteiros: \n");
  scanf("%d", &n1);
  scanf("%d", &n2);

  switch(operacao){
    case 1:
      printf("%d + %d = %d", n1, n2, n1 + n2);
      break;
    case 2:
      printf("%d - %d = %d", n1, n2, n1 - n2);
      break;
    case 3:
      printf("%d X %d = %d", n1, n2, n1 * n2);
      break;
    case 4:
      if(n2 == 0){
        printf("Não pode ser divisivel por 0");
      }else{
        printf("%d / %d = %d", n1, n2, n1 / n2);
      }
  }
}