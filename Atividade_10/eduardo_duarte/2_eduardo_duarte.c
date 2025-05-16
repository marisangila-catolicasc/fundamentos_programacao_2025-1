#include <stdio.h>

void meu_strcat(char *dest, const char *src) {
int i = 0, j = 0;

    while (dest[i] != '\0') i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main() {
char str1[100] = "Eduardo";
char str2[] = "Duarte";
    meu_strcat(str1, str2);
    printf(" nome completo : %s\n", str1);
    return 0;
}