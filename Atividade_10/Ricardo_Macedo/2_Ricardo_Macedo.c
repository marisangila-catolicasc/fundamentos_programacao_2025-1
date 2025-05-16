#include <stdio.h>

void meu_strcat(char *str1, char *str2) {
    int i = 0;

    while (str1[i] != '\0') {
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main() {
    char str1[100] = "Olá, ";
    char str2[] = "mundo!";

    meu_strcat(str1, str2);
    printf("Resultado da concatenação: %s\n", str1);

    return 0;
}
