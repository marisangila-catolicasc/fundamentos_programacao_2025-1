#include <stdio.h>

int verifica_vetores_iguais(int *vetor1, int *vetor2, int tamanho){
    for (int i = 0; i < tamanho; i++){
        if (vetor1[i] != vetor2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int tamanho, sao_iguais;

    printf("Digite o tamanho dos vetores:\n");
    scanf("%d", &tamanho);

    int vetor1[tamanho], vetor2[tamanho];
    
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor2[i]);
    }
    
    sao_iguais = verifica_vetores_iguais(vetor1, vetor2, tamanho);

    if (sao_iguais == 1){
        printf("\nOs vetores sao iguais\n");
    } else {
        printf("\nOs vetores nao sao iguais\n");
    }
    return 0;
}