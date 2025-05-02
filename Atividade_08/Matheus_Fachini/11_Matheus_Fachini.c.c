#include <stdio.h>

 int main()
 {

    float vetor[10] = {0};
    float media = 0;
    float soma = 0;

   printf("insira 10 numeros: \n");
    for (int i = 0; i < 10; i++)
       scanf ("%f", &vetor[i]);
           for (int i = 0; i < 10; i++)
           soma += vetor[i];
    media = soma / 10;

    printf("media: %.2f\n", media);

    

    
   return 0;
 }