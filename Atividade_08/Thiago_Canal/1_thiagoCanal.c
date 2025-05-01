#include <stdio.h>

int main(void){
    int valores;

    printf("Numero de valores: ");
    scanf("%d", &valores);

    float nums;
    float numeros_vetor[valores];
    int index = 0;

    for(int i = 0; i < valores; i++){
        printf("Valor float(%d): ", i + 1);
        scanf("%f", &nums);

        numeros_vetor[index] = nums;
        index++;
    }

    float soma = 0;

    for(int i = 0; i < valores; i++){
        soma += numeros_vetor[i];
    }

    float media = soma / valores;
    printf("Media e %.2f", media);
}