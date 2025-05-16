#include <stdio.h>

char* meu_strcat(char *destino, char *origem) {
    int i = 0, j = 0;

    while (destino[i] != '\0') {
        i++;
    }

    while (origem[j] != '\0') {
        destino[i] = origem[j];
        i++;
        j++;
    }

    destino[i] = '\0';
    
    return destino;
}

int main() {
    char str1[100] = "Testeeee 1";
    char str2[100] = " Testee 2";

    printf("%s\n", meu_strcat(str1, str2));
    return 0;
}
