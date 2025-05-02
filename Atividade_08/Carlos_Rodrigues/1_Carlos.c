#include <stdio.h>

int main() {
    
    int elemento;
    float soma = 0, media;
    
        printf("Digite quantos elementos tem o vetor:\n");
        scanf("%d", &elemento);
        float vetor[elemento];

    for (int x = 0; x < elemento; x++){
        printf("Digite o valor do vetor:\n%d", x+1);
        scanf("%f", &vetor[x]);
        soma += vetor[x];
    } 
    
        media = soma / elemento;
        printf("\nA média dos elementos informados é de: %.2f\n", media);

    return 0;
}
