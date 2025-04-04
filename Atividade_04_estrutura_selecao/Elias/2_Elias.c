#include <stdio.h>

int main(int argc, char const *argv[])
{

    int numero, resto;

    printf("Digite Um numero \n");
    scanf("%d", &numero);


    resto = numero % 2;
    if(resto == 0){
        printf("O numero eh par");
    }else{
        printf("O numero eh impar");
    }

    return 0;
}
