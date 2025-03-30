#include <stdio.h>

int main(){

  int N1, N2;

  printf("Informe um numero: ");
  scanf("%d", &N1);

  printf("Informe outro numero: ");
  scanf("%d", &N2);

  if(N1 > N2){
    printf("O maior numero e: %d", N1);
  }else if(N2 > N1){
    printf("O maior numero e: %d", N2);
  }else{
    printf("Os numeros sao iguais!");
  }
  
return 0;
}