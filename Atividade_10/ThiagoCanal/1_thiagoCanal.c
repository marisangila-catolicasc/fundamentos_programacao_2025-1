#include <stdio.h>

int meu_strlen(char *palavra);

int main(void){
    char pala[100];

    printf("Sua string: ");
    scanf("%s", pala);

    int tamanho = meu_strlen(pala);
    printf("Sua string tem %d letras", tamanho);
}

int meu_strlen(char *palavra){
    int i = 0, letras = 0;

    while(palavra[i] != '\0'){
        letras++;
        i++;
    }
    return letras;
}