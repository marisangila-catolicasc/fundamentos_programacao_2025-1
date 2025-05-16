#include <stdio.h>

char* meu_strcat(char *str, const char *str2) {

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        str[i] = str2[j];
        i++;
        j++;
    }

    str[i] = '\0';

    return str;
}

int main() {
    char str[100] = "TESTE 1";
    const char *str2 = "TESTE 2";

    meu_strcat(str, str2);

    printf("%s\n", str);
    return 0;
}
