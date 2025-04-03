#include <stdio.h>

int main(){

    int ano; 

    printf("Digite um ano a partir do ano 1000\n");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        if(ano % 100 != 0 || ano % 400 == 0){
            printf("Esse ano foi ou sera um ano bissexto!");
        }
        else{
            printf("Esse ano nao foi ou sera um ano bissexto");
        }
    }
    else{
        printf("Esse ano nao foi ou sera um ano bissexto");
    }
}