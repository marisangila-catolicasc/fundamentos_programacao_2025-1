#include <stdio.h>
int main() 
{
    int x, numero;
    float soma = 0;

    for(x = 1; x <= 8; x++) {
       printf("\nDigite o número:\n");
        scanf("\n%d\n", &numero);
       soma += numero;
}
    { printf("\nSua média é dos numeros é de: \n%.2f", soma/8);
    }

    return 0;
}
