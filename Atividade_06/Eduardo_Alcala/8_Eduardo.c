#include <stdio.h>

int main(){
    int maior, numero;


   for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero);

        // Se for o primeiro número ou se o atual for maior que o 'maior' anterior
        if (i == 0 || numero > maior) {
            maior = numero; // Atualiza o maior número
        }
    }

    printf("O maior numero e: %d \n\n", maior);

}