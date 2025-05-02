#include <stdio.h>

//3. Faça um programa que leia um vetor de inteiros e determine a media de seus valores. A seguir, o programa deve mostrar na tela quantos e quais os valores que estao acima da media.

int main(){
    int vetor [5];
    int media = 0;
    int i;

    for(i=0; i < 5; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
        media += vetor[i];
    }
    media = media / 5;
    printf("\nA media dos valores eh: %d\n\n", media);

    for (i=0; i < 5; i++){
        if (vetor[i] >= media){
            printf("Numeros acima da media: %d\n", vetor[i]);
        }
        else if(vetor[i] <= media){
            printf("Numeros abaixo da media: %d\n", vetor[i]);
        }
    }

    return 0;
}