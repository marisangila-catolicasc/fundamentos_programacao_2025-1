#include <stdio.h>
#define TAMANHO 5

int main() {

    float vetor1[TAMANHO] = {3.14, 1.618, 2.718, 0.577, 1.414};
    float vetor2[TAMANHO] = {9.81, 6.674, 1.732, 3.141, 2.236};

    float vetor3[TAMANHO];

    int i;

    for (i = 0; i < TAMANHO*2; i++){
        if(i % 2 == 0){
            vetor3[i] = vetor2[i/2];
        }else{
            vetor3[i] = vetor1[i/2];
        }
        
        
    }

    
}