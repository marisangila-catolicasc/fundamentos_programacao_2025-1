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
    char str1[200], str2[100];
    printf("digite a primeira string: ");
    scanf("%s", str1);
    printf("digite a segunda string: ");
    scanf("%s", str2);

    meu_strcat(str1, str2);
    printf("resultado da concatenação: %s\n", str1);
    return 0;
}
