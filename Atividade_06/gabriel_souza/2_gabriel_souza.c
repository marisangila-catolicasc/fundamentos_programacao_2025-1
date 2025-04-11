#include <stdio.h>

/*
faca um programa que apresente como resultado os
quadrados dos n ́umeros inteiros existentes na faixa de valores de 15 a 200
*/
int main(){

    for (int i = 15; i <= 200; i++){
        printf("quadrado de %d eh %d\n", i, i * i);
    }    
    return 0;
}
