#include <stdio.h>
#define BISSEXTO ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0 
int main()
{
    int ano;
    printf("Digite qualquer ano de 4 digitos:\n");
    scanf("%d", &ano);

    if (BISSEXTO)
    {
        printf("%d eh um ano bissexto!", ano);
    }else{
        printf("%d nao eh um ano bissexto", ano);
    }
    
    return 0;
}

