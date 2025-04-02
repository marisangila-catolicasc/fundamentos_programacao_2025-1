#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int numero;
    int resto;

    printf(" Digiteo número que quer conferir se é par ou ímpar\n");
    scanf("%d", numero);

    if (numero % 2 == 0)
    {
        printf("O número é par\n");
    }

    else {
        printf("É ímpar\n");
    }
    
    return 0;
    

}