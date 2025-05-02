#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int n1, random=0; 
    srand(time(NULL));
    printf("Digite um número:\n");
    scanf("%d", &n1);
  while (n1 != random){
    if (n1> 100){
        printf("Número inválido, escolha outro.\n");
        break;
    }
    int random = (rand() % 100);
    printf("%d\n", random);
        if(n1 == random){
           printf("O computador acertou o número.\n");
          break;
    
    }
  }
    return 0;
}