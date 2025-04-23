#include <stdio.h>

int main(void){
    int numero_inteiro, incremento_inteiro;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero_inteiro);
    printf("Digite um incremento inteiro: ");
    scanf("%d", &incremento_inteiro);

    for(int i = 0; i < numero_inteiro + 1; i+=incremento_inteiro){
        if(i == numero_inteiro){
            printf("%d.", i);
        }else{
            printf("%d, ", i);
        }
    }
}