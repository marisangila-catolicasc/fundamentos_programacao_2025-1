#include <stdio.h>
int main(){
  float peso;
  int idade; 
  char tipo;

  printf("Digite o peso do seu pet: \n");
  scanf("%f", &peso);

  printf("Digite a idade do seu pet: \n");
  scanf("%d", &idade);

  printf("Se o seu pet for um gato, digite g. Se for um cachorro, digite c: \n");
  scanf(" %c", &tipo);

  printf("Seu pet tem %.2fkg, %d anos, e o tipo dele é %c.\n", peso, idade, tipo);

  return 0;
  
}
