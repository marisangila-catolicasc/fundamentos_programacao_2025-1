#include <stdio.h>

int meu_strcmp(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) return 0;
        i++;
    }
    return s1[i] == s2[i];
}

int main() {
    char a[100] = "teste";
    char b[100] = "teste";
    printf("Resultado: %d\n", meu_strcmp(a, b));
    return 0;
}
