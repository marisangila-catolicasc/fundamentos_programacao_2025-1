#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adivinho(int n);

int main(void){
    int numero;

    printf("DIgite um numero: ");
    scanf("%d", &numero);
    
    adivinho(numero);
}

void adivinho(int n){
    srand(time(NULL));

    int chute = rand();
    int tentativas = 0;

    while(n != chute){
        chute = rand();
        tentativas++;
    }
    printf("Numero aleatorio: %d\n", chute);
    printf("Numero de tentativas: %d", tentativas);
}