#include <stdio.h>
int main(){

int numeros[10], maior;
  printf("Insira 10 numeros inteiros: \n");

for(int i = 0; i < 10; i++){
  scanf("%d", &numeros[i]);
}

maior = numeros[0];

for(int i = 0; i < 10; i++){
  if(numeros[i] == maior){
    maior = numeros[i];
  }
}
printf("Maior numero informado: %d", maior);
}