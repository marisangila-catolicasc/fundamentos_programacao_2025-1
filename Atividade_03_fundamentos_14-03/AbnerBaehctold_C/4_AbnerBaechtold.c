#include <stdio.h>

int main() {

   int idade_pet;
   float peso_pet;
   char tipo_pet;

   printf("Digite a idade do seu pet: ");
   scanf(" %d", &idade_pet);
   printf("Digite o peso do seu pet: ");
   scanf(" %f", &peso_pet);
   printf("Digite o tipo do seu pet: ");
   scanf(" %c", &tipo_pet);

   printf("\nInformacoes do Pet:\n");
   printf("A idade do seu pet é: %d\n", idade_pet);
   printf("O peso do seu pet é: %f\n", peso_pet);
   if (tipo_pet == 'c' || tipo_pet == 'C') {
       printf("O tipo do seu pet é: Cachorro\n");
   } else if (tipo_pet == 'g' || tipo_pet == 'G') {
       printf("O tipo do seu pet é: Gato\n");
   } else {
       printf("Tipo: Desconhecido\n");
   }

  return 0;
}