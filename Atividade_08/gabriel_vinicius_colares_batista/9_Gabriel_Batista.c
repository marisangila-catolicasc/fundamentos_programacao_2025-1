#include <stdio.h>

int main() {
    int lenVetor = 5;
    int vetor1[lenVetor], vetor2[lenVetor], vetor3[lenVetor * 2];

    for(int i = 0; i < lenVetor; i++){
        printf("Digite o valor da posicao %d do vetor 1: ", i);
        scanf("%d", &vetor1[i]);
        printf("\n");
        printf("Digite o valor da posicao %d do vetor 2: ", i);
        scanf("%d", &vetor2[i]);
        vetor3[i * 2] = vetor1[i];
        vetor3[i * 2 + 1] = vetor2[i];
        printf("\n");
    }

    for(int i = 0; i < lenVetor * 2; i++){
        printf("%d, ", vetor3[i]);
    }    
    return 0; 
}

