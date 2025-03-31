#include <stdio.h>
int main(void) {
 int n1,n2, n3;
  printf("Insira três números inteiros: \n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  if(n1 > n2 && n1 > n3){
    printf("O %d é o maior número", n1);
  }else if(n2 > n1 && n2 > n3){
    printf("O %d é o maior número", n2);
  }else if(n3 > n1 && n3 > n2){
    printf("O %d é o maior número", n3);
  }else{
    printf("Os números informados são iguais");
  }
  return 0;
}