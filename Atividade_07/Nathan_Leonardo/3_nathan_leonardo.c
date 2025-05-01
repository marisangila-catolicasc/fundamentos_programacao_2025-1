#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroUsuario, numeroGerado, tentativas = 0;

   
    srand(time(NULL));

    printf("Digite um numero entre 0 e 100: ");
    scanf("%d", &numeroUsuario);

    if (numeroUsuario < 0 || numeroUsuario > 100) {
        printf("Por favor, digite um numero valido entre 0 e 100.\n");
        return 1; 
    }

    
    do {
        numeroGerado = rand() % 101; 
        tentativas++;
        printf("Tentativa %d: Gerado %d\n", tentativas, numeroGerado);
    } while (numeroGerado != numeroUsuario);

    printf("\nNumero encontrado apos %d tentativas!\n", tentativas);

    return 0;
}
