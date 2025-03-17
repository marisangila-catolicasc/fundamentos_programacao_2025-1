#include <stdio.h>
#include <math.h>

int main() {
  int peso, idade;
  char coug;
  
  printf("Digite o peso do seu pet: ");
  scanf("%d", &peso);
  printf("Digite a idade do seu pet: ");
  scanf("%d", &idade);
  printf("Se o seu pet for gato, digite g, se for cachorro, digite c: ");
  scanf(" %c", &coug);

  if (coug == 'g'){
    printf("O seu pet é um gato, pesa %d kg e tem %d anos de idade", peso, idade);
  } else {
    printf("O seu pet é um cachorro, pesa %d kg e tem %d anos de idade", peso, idade);
  }
  
}