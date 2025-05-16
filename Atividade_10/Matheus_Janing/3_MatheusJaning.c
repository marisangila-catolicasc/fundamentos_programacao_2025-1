#include <stdio.h>

void meu_strcpy(char *str1, char *str2){

    int i = 0;

    while(str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("String copia: %s", str2);
}

int main(){

    char palavra[100], pala[100];

    printf("Digite uma string: ");
    scanf("%s", palavra);

    meu_strcpy(palavra, pala);

    return 0;
}