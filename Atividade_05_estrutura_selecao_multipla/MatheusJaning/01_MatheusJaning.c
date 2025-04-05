#include <stdio.h>

int main(void){
  int cod;
    printf("1254\n");
    printf("5698\n");
    printf("7114\n");
    
    printf("Código do prudto: ");
    scanf("%d", &cod);

    switch(cod){
      case 1254:
        printf("Sanduba de presunto - R$8,00 \n");
        break;
      case 5698:
        printf("Churros R$3,50 \n");
        break;
      case 7114:
        printf("Suco de laranja que parece de limao mas tem gosto de tamarindo - R$5,00 \n");
    }
}