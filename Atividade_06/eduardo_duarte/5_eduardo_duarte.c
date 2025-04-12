#include <stdio.h>

int main ()

{    
    int soma = 0;

    for (int i = 1; i <= 100; i += 1)
{   
    soma = soma + i;
    
}
    printf("a soma dos numeros de 1 a 100 e: %d \n", soma);
     
    return 0;
}