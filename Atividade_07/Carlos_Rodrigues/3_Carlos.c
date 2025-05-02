#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int numUsuario, numAleatorio, tentativas = 0;

    printf("Digite um número inteiro até 100:\n");
    scanf("%d", &numUsuario);

    srand(time(NULL));

    do {
        numAleatorio = rand() % 101;
        tentativas++;
        printf("O número gerado: %d\n", numAleatorio);}
        
    while (numAleatorio != numUsuario);

        printf("O numero foi encontrado apos %d tentativas.\n", tentativas);

    return 0;
}
