#include <stdio.h>

char* meu_strcpy(char *str, const char *str2) {
    int i = 0;
    while (str2[i] != '\0') {
        str[i] = str2[i];
        i++;
    }
    str[i] = '\0'; 

    return str;
}

int main() {
    char str[100];              
    const char *str2 = "TESTE";  

    meu_strcpy(str, str2);

    printf("%s\n", str);
    return 0;
}
