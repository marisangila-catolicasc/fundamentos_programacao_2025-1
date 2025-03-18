#include <stdio.h>

int num;


int main(void) {
  printf("Digite um número inteiro: \n");
    scanf("%d", &num);
  
  printf("O antecessor do seu número é: %d, o seu número é: %d e seu sucessor é: %d\n", num-1, num, num+1);
  
}
