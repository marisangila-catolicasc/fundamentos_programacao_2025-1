#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero1, numero2, numero3;

    printf("Digite um numero\n");
    scanf("%d", &numero1);

    printf("Digite outro numero\n");
    scanf("%d", &numero2);

    printf("Digite mais um numero\n");
    scanf("%d", &numero3);

    if(numero1> numero2 && numero1 > numero3){
        printf("%d eh o numero maior", numero1);
    } else if(numero2> numero3 && numero2 > numero1){
        printf("%d eh o numero maior", numero2);
    }else{
        printf("%d eh o maior numero", numero3);
    }


    return 0;
}
