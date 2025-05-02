#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_usuario, numero_gerado;

    
    srand((unsigned int)time(NULL));

    
    printf("Digite um numero para o computador tentar gerar: ");
    scanf("%d", &numero_usuario);

   
    do {
        numero_gerado = rand() % 100 + 1;  
        printf("Tentativa: %d\n", numero_gerado);
    } while (numero_gerado != numero_usuario);

    printf("O computador acertou o numero: %d!\n", numero_gerado);

    return 0;
}
