#include <stdio.h>

int meu_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 1;
    }
    return 0;
}

int main() {
    const char *texto1 = "abc";
    const char *texto2 = "abc";
    const char *texto3 = "abcd";

    printf("resultado 1: %d\n", meu_strcmp(texto1, texto2));
    printf("resultado 2: %d\n", meu_strcmp(texto1, texto3)); 

    return 0;
}

