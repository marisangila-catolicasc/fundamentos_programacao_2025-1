#include <stdio.h>

//9. Faça um programa que leia dois vetores de 5 elementos cada e crie um terceiro vetor intercalando os valores dos dois primeiros.

int main() {
int vetor1[5];
int vetor2[5];
int vetor3[10];
int i;

    printf("Digite 5 numeros para o vetor 1: \n");
    for(i = 0; i < 5; i++){
    scanf("%d", &vetor1[i]);
}
    printf("Digite 5 numeros para o vetor 2: \n");
    for(i = 0; i < 5; i++){
    scanf("%d", &vetor2[i]);
}
        for(i = 0; i < 5; i++){
        vetor3[i*2] = vetor1[i];
        vetor3[i*2+1] = vetor2[i];
        }
    
    printf("\nVetor 3 com numeros intercalados:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }

return 0;
}