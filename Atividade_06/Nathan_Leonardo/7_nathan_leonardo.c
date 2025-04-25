#include <stdio.h>

int main(void){
    
    int num, soma, media;
    num = 0;
    soma = 0;
    media = 0;
  
    for(int i = 1; i <= 8; i++){
      printf("Digite o %dº número: \n", i);
      scanf("%d", &num);
      soma += num;
    }
    media = soma / 8;
    printf("Média: %d \n", media);
    
    return 0;
}