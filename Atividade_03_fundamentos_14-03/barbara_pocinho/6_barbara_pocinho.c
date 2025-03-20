#include <stdio.h>
int main(void) {
  int a, ant, suc;
 
  
  
  printf("Digite um numero: \n");
  scanf("%d",&a);

  ant = a - 1;
  suc = a + 1;
  
  printf("O antecessor desse numero eh %d e o sucessor eh %d", ant, suc);
  
 
  return 0;
}