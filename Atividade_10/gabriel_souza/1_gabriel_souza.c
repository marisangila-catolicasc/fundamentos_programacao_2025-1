#include <stdio.h>

/*
Crie uma fun¸c˜ao chamada meu strlen que recebe uma string como argumento e
retorna o tamanho dela (n˜ao use a fun¸c˜ao strlen da biblioteca padr˜ao)
*/

int meu_strlen(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main() {
    char str[] = "Frase de teste abc 123";

    printf("o tamanho dela eh: %d\n", meu_strlen(str));
    return 0; 
}

