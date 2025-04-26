#include <stdio.h>
#define TAMANHO 20
int main() {
    int vetor[TAMANHO] = {3, 15, 7, 23, 9, 18, 4, 11, 30, 21, 5, 8, 14, 12, 17, 25, 6, 22, 19, 10};

    int i;

    int num_escolhido = 0;

    printf("Digite um numero: \n");
    scanf("%d", &num_escolhido);

    int contador = 0;
    for (i = 0; i < TAMANHO; i++)
    {
        if(vetor[i] == num_escolhido){
            contador++;
        }
    }
    printf("O numero que tu digitou aparece %d vez(es) no vetor ", contador);


}