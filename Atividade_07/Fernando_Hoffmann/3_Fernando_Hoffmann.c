#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main(void) {
    int num1, numgerado, tentativas = 0;
    srand( time(NULL));
    printf("Digite um numero: ");
    scanf("%d", &num1);
    do {
        numgerado = rand() % 100;
        tentativas++;
        printf("Tentativa:%d\nNumero:%d\n", tentativas, numgerado);
        
    }
        while (numgerado != num1);
        printf("Numero encontrado após: %d tentativas!\n", tentativas);        
    
    return 0; 
}


