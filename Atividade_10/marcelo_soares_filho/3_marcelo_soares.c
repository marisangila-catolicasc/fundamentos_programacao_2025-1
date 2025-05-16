#include <stdio.h>

char* meu_strcpy(char *destino, char *origem) {
    int i = 0;

    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }

    destino[i] = '\0';

    return destino;
}

int main() {
    char str1[100] = "minha string pra copiar lalalal@", str2[100] = "";

    printf("%s\n", meu_strcpy(str2, str1));
    return 0;
}