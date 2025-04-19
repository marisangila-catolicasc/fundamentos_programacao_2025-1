#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int numero = 0;
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: \n");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            pares++;
        }
        else {
            impares++;
        }
    
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
