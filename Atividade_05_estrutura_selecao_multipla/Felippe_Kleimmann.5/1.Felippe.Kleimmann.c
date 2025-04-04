include <stdio.h>

int main(){
  int codigo;

  printf("Digite o codigo do proudo: ");
  scanf("%d", &codigo);

  switch(codigo){
    case 1254:
      printf("sanduiche de presesunto R$8.00\n");
      break;
   case 5698:
      printf("churros R$3.50\n");
    case 7114:
      printf("suco de laranja que parace limão que tem gosto de tamarindo R$5.00\n");
    default: 
      printf("codigo invalido\n");
  }
  
} return 0;
