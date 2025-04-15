#include <stdio.h>

int main()
{
    int numero;
    int incremento;
    printf("Digite um numero inteiro:\n ");
    scanf("%d", &numero);
    printf("Digite um incremento:\n ");
    scanf("%d", &incremento);

    for(int i = numero; i <1000; i += incremento){
        if (incremento == 0){
            printf("Nao funciona com 0, digite outro incremento");
            break;
        }else{
       printf("%d\n", i);
        }
    }
    
    return 0;
}
