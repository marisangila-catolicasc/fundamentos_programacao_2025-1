#include <stdio.h>

/*
Crie uma fun¸c˜ao chamada meu strcat que concatena duas strings. A fun¸c˜ao deve
adicionar a segunda string ao final da primeira, como a fun¸c˜ao strcat.
*/

char* meu_strcat(char *str1, char *str2){
    int i = 0, j = 0;

    while (str1[i] != '\0'){ // funciona igual o length de str1
        i++;
    }
    while (str2[j] != '\0'){ // substitui o \0 (ultimo) da str1 pelo primeiro caracter da str2 
        str1[i] = str2[j];       
        i++; // vai pro prox index pra sempre addo prox carc
        j++; // tipo o leng do str2
    }
    str1[i] = '\0'; // so diz q aqui é o fim da str1
    return str1;
}

int main() {
    char str1[100] = "Testeeee 1";
    char str2[100] = " Testee 2";

    printf("%s\n", meu_strcat(str1, str2));
    return 0; 
}

