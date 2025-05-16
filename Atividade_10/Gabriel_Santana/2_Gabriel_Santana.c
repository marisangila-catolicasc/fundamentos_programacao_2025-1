#include <stdio.h>

void meu_strcat(char *dest, char *src) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}

int main() {
    char string1[200], string2[100];
    printf("Digite o primeiro string: ");
    scanf("%s", string1);
    printf("Digite o segundo string: ");
    scanf("%s", string2);

    meu_strcat(string1, string2);
    printf("resultado da concatenação: %s\n", string1);
    return 0;
}
