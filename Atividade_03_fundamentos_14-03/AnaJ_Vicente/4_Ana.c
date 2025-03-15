#include <stdio.h>
int main() {
  int idade;
  float peso;
  char tipo;
  
    printf("Me informe a idade do seu pet: ");
    scanf("%d", &idade);
  
    printf("O peso do seu pet é: ");
    scanf("%f", &peso);
  
    printf("Qual tipo de pet é: (G para gato e C para cachorro): ");
    scanf(" %c", &tipo);
  
    if (tipo == 'G')
      printf("O seu pet é um gato de %d anos e pesa %.2f kg", idade,peso);
  else
      printf("O seu pet é um cachorro de %d anos e pesa %.2f kg", idade,peso);
      
    

    return 0;
}