#include <stdio.h>

int main(void){
    int vezes;
    printf("Quantas vezes voce quer? ");
    scanf("%d", &vezes);

    for(int i = 0; i < vezes; i++){
        printf("A vida eh uma viagem e algumas pessoas escolheram ser a mala (%d)\n", i + 1);
    }

}

