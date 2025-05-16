#include <stdio.h>

void meu_strcat(char destino[], char origem[]) {
    int i = 0, j = 0;
    while (destino[i] != '\0') i++;
    while (origem[j] != '\0') {
        destino[i++] = origem[j++];
    }
    destino[i] = '\0';
}

int main() {
    char str1[200] = "Olá, ";
    char str2[100] = "mundo!";
    meu_strcat(str1, str2);
    printf("Concatenado: %s\n", str1);
    return 0;
}
