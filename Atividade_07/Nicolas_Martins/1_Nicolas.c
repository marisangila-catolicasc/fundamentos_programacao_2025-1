#include <stdio.h>

int main(){

int numero, numero2;

    printf("Digite um numero: ");
        scanf("%d", &numero);

  
    printf("Digite outro numero: ");
        scanf("%d", &numero2);

  
  while (numero != numero2) {
    printf("Numeros escolhidos: %d, %d\n", numero, numero2);
    if (numero > numero2){
        numero--;
    }else{
        numero2--;
    }

    
  }
  

    printf("Numeros igualados: %d, %d\n", numero, numero2);


  
}