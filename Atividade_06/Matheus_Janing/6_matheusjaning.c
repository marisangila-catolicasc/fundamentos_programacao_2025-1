#include <stdio.h>
int main(){

  int numero, incremento;
  printf("Insira um numero inteiro: ");
  scanf("%d", &numero);
  printf("Agora insira um incremento para esse numero: ");
  scanf("%d", &incremento);

  for(int i = 0; i < numero +1; i += incremento){
    if(i == numero){
      printf("%d", i);
    }
    else{
      printf("%d, ", i);
    }
  }
}