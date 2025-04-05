#include <stdio.h>

void soma(void);
void sub(void);
void mult(void);
void div(void);

int main(void){
  int choice;

  printf("1 - soma\n");
  printf("2 - subtracao\n");
  printf("3 - multiplicacao\n");
  printf("4 - divisao\n");

  printf("Operacao: ");
  scanf("%d", &choice);

  switch(choice){
    case 1:
      soma();
      break;
    case 2:
      sub();
      break;
    case 3:
      mult();
      break;
    case 4:
      div();
      break;
  }
  
}

void soma(void){
  int n1, n2;

  printf("N1: ");
  scanf("%d", &n1);
  printf("N2: ");
  scanf("%d", &n2);
  
  printf("%d + %d = %d", n1, n2, n1 + n2);
}

void sub(void){
  int n1, n2;

  printf("N1: ");
  scanf("%d", &n1);
  printf("N2: ");
  scanf("%d", &n2);

  printf("%d - %d = %d", n1, n2, n1 - n2);
}

void mult(void){
  int n1, n2;

  printf("N1: ");
  scanf("%d", &n1);
  printf("N2: ");
  scanf("%d", &n2);

  printf("%d X %d = %d", n1, n2, n1 * n2);
}

void div(void){
  int n1, n2;

  printf("N1: ");
  scanf("%d", &n1);
  printf("N2: ");
  scanf("%d", &n2);

  if(n2 != 0){
    printf("%d / %d = %d", n1, n2, n1 / n2);
  }else{
    printf("Nao se divide por 0");
  }

  
}