#include <stdio.h>
#define TAMANHO 10

int main() {

    int numeros[TAMANHO] = {5, 12, 7, 23, 3, 9, 18, 4, 11, 30};

    int i = 0;

    int num_escolhido = 0;

    printf("Digite um numero: \n");
    scanf("%d", &num_escolhido);

    int presente_vet = 0;

    for (i = 0; i < TAMANHO; i++)
    {
        if(numeros[i] == num_escolhido){
            printf("Esta presente na posicao: %d", i);
            presente_vet = 1;
            break;
        }
        printf("Nao esta na posicao: %d\n", i);
    }
    if (presente_vet == 0)
    {
        printf("O numero %d nao estava no vetor", num_escolhido);
    }
    
    
}