#include <stdio.h>
int main() 
{
    int x, numero, maior;
    
    printf("Digite o número:\n");
    scanf("%d", &maior);

    for (x = 2; x <= 10; x++) {
        printf("Digite o %d número:\n", x);
        scanf("%d", &numero);

        if (numero > maior){
            maior = numero;
        }
    }
    printf("O maior numero digitado foi %d\n", maior);

    return 0;
}
