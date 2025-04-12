#include <stdio.h>
int main(int argc, char const *argv[])
{
    int par = 0, impar = 0, numero = 0;

    for (int i = 1; i <=10; i++)
    {
        printf("Insira um numero\n");
        scanf("%d", &numero);
        if(numero%2==0){
            par++;
        }else{
            impar++;
        }
    }
    
    printf("%d sao pares e %d sao impares", par, impar);
    
    return 0;
}
