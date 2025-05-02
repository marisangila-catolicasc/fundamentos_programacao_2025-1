#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main()
 {
   int N1, N2, escolha = 0;
while(escolha != 5){
     printf("Digite o primeiro numero: ");
       scanf("%d", &N1);
       printf("Digite o segundo numero: ");
       scanf("%d", &N2);
      printf("Digite:\n |1 - para somar|\n |2 - para subtrair| \n |3 - para multiplicar|\n |4 - para dividir|\n |5 - para sair|\n");
      scanf("%d", &escolha);
      switch (escolha){
        case 1:
        printf("A soma dos numeros e: %d\n", N1 + N2);
        break;
        case 2:
        printf("A subtracao dos numeros e: %d\n", N1 - N2);
        break;
        case 3:
        printf("A multiplicacao dos numeros e: %d\n", N1 * N2);
        break;
        case 4:
        printf("A divisao dos numeros e: %d\n", N1 / N2);
        break;
        case 5:
        printf("Saindo...\n"); 
        printf("Saindo..\n");
        printf("Saindo.\n");
        
      }
    printf("Saiu\n"); 
   }
   return 0;
 }