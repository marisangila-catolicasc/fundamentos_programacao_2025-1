#include <stdio.h>

int main()
{
    int numero;
    int maior = -10000000;
    for(int i = 0; i < 10; i++){
       printf("Digite um numero: \n");
       scanf("%d", &numero);
       if (numero > maior)
       {
        maior = numero;
       }
       else{
        continue;
       }
       
       }

    
    printf("O maior numero informado foi %d", maior);
    return 0;
}
