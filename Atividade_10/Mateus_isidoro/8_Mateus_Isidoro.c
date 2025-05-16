#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int vertor_igual(int *vetor, int *vetor2){
    for(int i = 0; i < 5; i++){
        if(vetor[i] != vetor2[i]){
            return 0;
        }else{
            return 1;
        }
    }
}
int main(void){
    int vetor[5];
    int vetor2[5];
    printf("Digite 5 numeros \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Digite mais 5 numeros \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor2[i]);
    }
    printf("1 = igual\n0 = diferente \nResultado = %d\n", vertor_igual(vetor,vetor2));
    return 0;
}