#include <stdio.h>

int main(void){
    int idade;
    char nome[50];

    printf("Qual seu nome? ");
    scanf("%s", nome);
    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Ola %s, voce tem %d anos.", nome, idade);
    return 0;
}