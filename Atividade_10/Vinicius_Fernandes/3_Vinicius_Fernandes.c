#include <stdio.h>

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
    char str1[100] = "Hello, World!", str2[100] = "";

    printf("%s", meu_strcpy(str2, str1));
    return 0;
}