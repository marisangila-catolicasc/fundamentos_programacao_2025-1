#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main()
 {
   int N1, repeticao = 0;
   int aleatorio = 0;
   srand(time(0));
   printf("Digite um numero ate 100: ");
   scanf("%d", &N1);
   while(N1 != aleatorio){
      if(N1 > 100){
         printf("numero invalido");
         break;
      }
    int aleatorio = rand() % 101;
    printf("%d\n", aleatorio);
      repeticao++;
      if(N1 == aleatorio){
         printf("Parabens, o computador achou seu numero\n");
         printf("O numero de tentativas do computador foi: %d\n", repeticao);
         break;
      }
   }
   return 0;
 }