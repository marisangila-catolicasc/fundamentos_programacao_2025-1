#include <stdio.h>
#include <stdlib.h>   
#include <time.h>   

int main() {
    int numero_escolhido, aleatorio, tentativas = 0;

    printf("Digite um número inteiro entre 0 e 49: ");
    scanf("%d", &numero_escolhido);

    srand(time(NULL)); 

    do {
        aleatorio = rand() % 50;  
        printf("Foi gerado um numero aleatorio: %d\n", aleatorio);
        tentativas++;
    } while (aleatorio != numero_escolhido);

    printf("Parabens, voce acertou! Apos %d tentativas.\n", tentativas);

    return 0;
}
