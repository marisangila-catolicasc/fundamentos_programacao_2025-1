#include <stdio.h>

int main(int argc, char const *argv[])
{

    float n1;
    printf("Digite um numero:\n");
    scanf("%f", &n1);

    if (n1>=0)
    {
     printf("O numero digitado e positivo\n");

    }
    else
    {
        printf("O numero digitado e negativo");
    }    

    return 0;
}
