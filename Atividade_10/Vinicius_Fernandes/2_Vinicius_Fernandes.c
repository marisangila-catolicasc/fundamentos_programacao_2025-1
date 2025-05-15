#include <stdio.h>

char* meu_strcat(char *str1, char *str2){
    int i = 0, j = 0;

    while (str1[i] != '\0'){
        i++;
    }
    while (str2[j] != '\0'){
        str1[i] = str2[j];       
        i++;
        j++;
    }
    str1[i] = '\0';
    return str1;
}

int main() {
    char str1[100] = "texto01";
    char str2[100] = "texto02";

    printf("%s\n", meu_strcat(str1, str2));
    return 0;
}