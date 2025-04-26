#include <stdio.h>
#define TAMANHO 5

int main() {

    float vetor1[TAMANHO] = {3.14, 1.618, 2.718, 0.577, 1.414};
    float vetor2[TAMANHO] = {9.81, 6.674, 1.732, 3.141, 2.236};

    float vetor3[TAMANHO];

    int i;

    for (i = 0; i < TAMANHO; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    for (i = 0; i < TAMANHO; i++){
        printf("%f\n", vetor3[i]);
    }
    
}