#include <stdio.h>

int idade;
float peso;
char tipo;


int main(void) {
  printf("Digite a idade do seu PET: \n");
    scanf("%d", &idade);
  
  printf("Digite o peso do seu PET: \n");
    scanf("%f", &peso);
  
  printf("Digite o tipo do seu PET: \n");
    scanf(" %c", &tipo);
  
  if(tipo == 'c' || tipo == 'C'){
    printf("O seu PET é um cachorro, sua idade é: %d e seu peso é: %f", idade, peso);
  }else if(tipo == 'g' || tipo == 'G'){
    printf("O seu PET é um gato, sua idade é: %d e seu peso é: %f", idade, peso);
  }
  
}
