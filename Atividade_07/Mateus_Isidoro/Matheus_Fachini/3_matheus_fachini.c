#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main()
 {
   int N1 = 0;
   int repeticao = 0;
   int aleatorio = 0;
    
   srand(time(NULL));
    
   printf("Digite um numero ate 1000: ");
   scanf("%d", &N1);
    
   while(N1 != aleatorio){
      if(N1 > 1000){
         printf("numero invalido");
         break;
      }
    int aleatorio = rand() % 1001;
    printf("%d\n", aleatorio);
      repeticao++;
      
      if(N1 == aleatorio){
         printf("o computador achou seu numero\n");
         printf("O numero de tentativas do computador foi: %d\n", repeticao);
         break;
      }
   }
   return 0;
 }