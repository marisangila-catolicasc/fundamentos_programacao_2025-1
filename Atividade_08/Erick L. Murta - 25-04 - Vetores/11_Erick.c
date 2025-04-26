#include <stdio.h>
#define TAMANHO 20
int main() {
    int vetor[TAMANHO] = {3, 8, 14, 21, 7, 18, 5, 11, 6, 23, 9, 12, 15, 17, 4};
    int i;
    
    int soma = 0;

    for (i = 0; i < TAMANHO; i++)
    {
        if(i % 2 != 0){
            soma = soma + vetor[i];
        }
    }
    printf("%d", soma);


}