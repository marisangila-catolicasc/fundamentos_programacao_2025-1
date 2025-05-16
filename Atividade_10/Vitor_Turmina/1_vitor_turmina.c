#include <stdio.h>
#include <stdlib.h>

int meu_strlen(const char str[]){
    int i = 0;
    while (str[i] != '\0')
        i++;
return i;
}

int main(){

    char str[50];

    printf("Escreva uma palavra ou frase:\n");
    scanf("%50[^\n]s", str);

    printf("Essa frase tem %d caracteres", meu_strlen(str));
}
