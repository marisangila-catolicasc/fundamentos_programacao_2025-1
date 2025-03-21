#include <stdio.h> 



int idade; 

float peso; 

char tipo; 



int main(void) { 

  printf("Que tipo de pet você tem:  \n"); 

  scanf("%c", &tipo); 

  printf("Qual a idade do seu pet: \n"); 

  scanf(" %d", &idade); 

  printf("Qual o peso do seu pet: \n"); 

  scanf(" %f", &peso); 

  printf("As informações do pet \n"); 

  printf("A idade é: %d \n", idade); 

  printf("O peso é: %.2f \n", peso); 

  if (tipo == 'c' || tipo == 'C') { 

    printf("O tipo é um Catiorinho \n"); 

  } else if (tipo == 'g' || tipo == 'G') { 

    printf("O tipo é um Gatinho \n"); 

  } else { 

    printf("Não reconhecido!!!"); 

  } 

  return 0; 

} 


