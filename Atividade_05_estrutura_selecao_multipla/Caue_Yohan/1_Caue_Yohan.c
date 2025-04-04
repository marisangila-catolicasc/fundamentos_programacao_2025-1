#include <stdio.h>

int main(void) {
  int codigo;
  printf("|Codigo|\n");
  printf("|1254|\n");
  printf("|5698|\n");
  printf("|7114|\n");
  printf("Digite um do códigos a cima: ");
  scanf("%d", &codigo);
  switch(codigo){
   case 1254:
      printf("|1254|Sanduíche de presunto|R$8,00|\n");
      break;
   case 5698:
      printf("|5698|Churros|R$3,50|\n");
      break;
   case 7114:
      printf("|7114|Suco de laranja que parece de limão mas tem gosto de tamarindo|R$5,00|\n");
      break;
  return 0;
}
}