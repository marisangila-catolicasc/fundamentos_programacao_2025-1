#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero1, numero2;

    printf("insira um numero: \n");
    scanf("%d", &numero1);

    printf("insira outro numero: \n");
    scanf("%d", &numero2);

    if(numero1 == numero2){
        printf("Os numeros sao iguais!");
    }else if (numero1 > numero2){
        printf("O numero %d eh maior que o numero %d", numero1, numero2);
    }else{
        printf("O numero %d eh maior que o numero %d", numero2, numero1);
    }
    return 0;
}