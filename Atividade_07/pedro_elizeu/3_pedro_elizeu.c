#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_usuario, numero_aleatorio;
    int tentativas = 0;

    srand(time(NULL));
    
    printf("Digite um numero entre 1 e 100: ");
    scanf("%d", &numero_usuario);
    if (numero_usuario < 1 || numero_usuario > 100) {
        printf("Por favor, digite um numero entre 1 e 100.\n");
        return 1;
    }
    do {
        numero_aleatorio = rand() % 100 + 1;
        tentativas++;
        
        printf("Tentativa %d: Numero gerado = %d\n", tentativas, numero_aleatorio);
        
    } while (numero_aleatorio != numero_usuario);
    
    printf("\nEncontrado! O numero %d foi gerado apos %d tentativas.\n", numero_usuario, tentativas);
    
    return 0;
}