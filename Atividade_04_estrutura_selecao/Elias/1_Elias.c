#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float numero;

    printf("Insira um numero\n");

    scanf("%f", &numero);

    if(numero >= 0){
        printf("O numero inserido eh positivo");
    }else{
        printf("O numero inserido eh negativo");
    }

    return 0;
}
