#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main() {
    int n1, numero_gerado, tentativas = 0;
    
    srand( time(NULL));
    printf("Digite um numero: ");
    scanf("%d", &n1);
    
    do {
        numero_gerado = rand() % 100;
        tentativas++;
        printf("Tentativa:%d\nNumero:%d\n", tentativas, numero_gerado);

    }
        while (numero_gerado != n1);
        printf("Numero encontrado após: %d tentativas!\n", tentativas);        

    return 0; 
}