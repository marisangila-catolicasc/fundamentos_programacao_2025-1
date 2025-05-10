#include <stdio.h>

/*
Crie uma fun¸c˜ao chamada meu strcpy que copia o conte´udo de uma string para
outra, como a fun¸c˜ao strcpy
*/

char* meu_strcpy(char *str, char *strPraCopy){
    int i = 0;

    while(strPraCopy[i] != '\0'){
        str[i] = strPraCopy[i];
        i++;
    }
    str[i+1] = '\0';
    return str;
}

int main() {
    char str1[100] = "minhas string pra copiar lalalal@", str2[100] = "";

    printf("%s", meu_strcpy(str2, str1));
    return 0; 
}

