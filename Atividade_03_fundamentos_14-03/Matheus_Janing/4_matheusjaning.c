#include <stdio.h>
#include <string.h>

int main(void) {
  int idade_pet;
  float peso_pet;
  char tipo_pet[10];
  printf("Insira a idade do seu pet: \n");
  scanf("%d", &idade_pet);
  printf("Insira o peso do seu pet em kg: \n");
  scanf("%f", &peso_pet);
  printf("Insira o tipo do seu pet, cachorro(c) ou gato(g): \n");
  scanf("%s", tipo_pet);

  printf("Seu pet tem %d anos\n", idade_pet);
  printf("Seu pet tem %f kg\n", peso_pet);
  if(strcmp(tipo_pet, "c") == 0){
    printf("Seu pet eh um cachorro\n");  
  }else if(strcmp(tipo_pet, "g") == 0){
    printf("Seu pet eh um gato\n");
  }else{
    printf("Caracter invalido\n");
  }
  return 0;
}