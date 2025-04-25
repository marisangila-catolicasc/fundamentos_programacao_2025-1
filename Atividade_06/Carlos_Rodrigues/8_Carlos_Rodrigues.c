#include <stdio.h>
int main() 
{
    int x, numero, maior;
    
    printf("Digite o 1 número:\n");
    scanf("%d", &maior);

    for (x = 2; x <= 10; x++) {
        printf("Digite o %d número:\n", x);
        scanf("%d", &numero);

        if (numero > maior){
            maior = numero;
        }
    }
    printf("O maior número digitado foi %d\n", maior);

    return 0;
}
