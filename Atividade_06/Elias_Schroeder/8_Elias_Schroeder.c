#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0, numeroMaior = 0;
    
    for (int i = 0; i <= 10; i++)
    {
      printf("Coloque um numero\n");
      scanf("%d", &numero);

      if(numeroMaior <= numero){
        numeroMaior = numero;
      }

    }

    printf("O maior numero e %d", numeroMaior);
        

    return 0;
}
